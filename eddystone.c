//
// Created by Alex Van Boxel on 09/08/15.
//

#include <stdint.h>
#include <ble_gap.h>
#include <nrf_error.h>
#include "eddystone.h"

uint32_t eddystone_head_encode(uint8_t *p_encoded_data,
                               uint8_t frame_type,
                               uint8_t *p_len) {
// Check for buffer overflow.
    if ((*p_len) + 12 > BLE_GAP_ADV_MAX_SIZE) {
        return NRF_ERROR_DATA_SIZE;
    }

    (*p_len) = 0;
    p_encoded_data[(*p_len)++] = 0x02; // Length	Flags. CSS v5, Part A, § 1.3
    p_encoded_data[(*p_len)++] = 0x01; // Flags data type value
    p_encoded_data[(*p_len)++] = 0x06; // Flags data
    p_encoded_data[(*p_len)++] = 0x03; // Length	Complete list of 16-bit Service UUIDs. Ibid. § 1.1
    p_encoded_data[(*p_len)++] = 0x03; // Complete list of 16-bit Service UUIDs data type value
    p_encoded_data[(*p_len)++] = 0xAA; // 16-bit Eddystone UUID
    p_encoded_data[(*p_len)++] = 0xFE;
    p_encoded_data[(*p_len)++] = 0x03; // Length	Service Data. Ibid. § 1.11
    p_encoded_data[(*p_len)++] = 0x16; // Service Data data type value
    p_encoded_data[(*p_len)++] = 0xAA; // 16-bit Eddystone UUID
    p_encoded_data[(*p_len)++] = 0xFE;
    p_encoded_data[(*p_len)++] = frame_type;

    return NRF_SUCCESS;
}

