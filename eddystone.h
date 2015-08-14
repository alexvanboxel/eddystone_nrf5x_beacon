//
// Created by Alex Van Boxel on 09/08/15.
//

#ifndef ALEX_EDDYSTONE_H
#define ALEX_EDDYSTONE_H

uint32_t eddystone_head_encode(uint8_t *p_encoded_data,
                               uint8_t frame_type,
                               uint8_t *p_len);

uint32_t eddystone_uint32(uint8_t *p_encoded_data,
                          uint8_t *p_len,
                          uint32_t val);

uint32_t eddystone_uint16(uint8_t *p_encoded_data,
                          uint8_t *p_len,
                          uint16_t val);


#endif //ALEX_EDDYSTONE_H
