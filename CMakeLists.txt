cmake_minimum_required(VERSION 3.2)
project(eddystone_beacon)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(NRF_SDK_ROOT /SDK/nRF51/9.0.0)
set(SRC_COMPONENTS ../../../components)



include_directories(
config
${NRF_SDK_ROOT}/components/libraries/util
${NRF_SDK_ROOT}/components/toolchain/gcc
${NRF_SDK_ROOT}/components/drivers_nrf/uart
${NRF_SDK_ROOT}/components/ble/common
${NRF_SDK_ROOT}/components/ble/ble_radio_notification
${NRF_SDK_ROOT}/components/drivers_nrf/common
${NRF_SDK_ROOT}/components/softdevice/s110/headers
${NRF_SDK_ROOT}/components/drivers_nrf/config
${NRF_SDK_ROOT}/examples/bsp
${NRF_SDK_ROOT}/components/libraries/fifo
${NRF_SDK_ROOT}/components/drivers_nrf/gpiote
${NRF_SDK_ROOT}/components/toolchain
${NRF_SDK_ROOT}/components/device
${NRF_SDK_ROOT}/components/softdevice/common/softdevice_handler
${NRF_SDK_ROOT}/components/libraries/timer
${NRF_SDK_ROOT}/components/drivers_nrf/hal
${NRF_SDK_ROOT}/components/libraries/button
)


set(SOURCE_FILES
${NRF_SDK_ROOT}/components/libraries/button/app_button.c
${NRF_SDK_ROOT}/components/libraries/util/app_error.c
${NRF_SDK_ROOT}/components/libraries/fifo/app_fifo.c
${NRF_SDK_ROOT}/components/libraries/timer/app_timer.c
${NRF_SDK_ROOT}/components/libraries/util/nrf_assert.c
${NRF_SDK_ROOT}/components/drivers_nrf/uart/app_uart_fifo.c
${NRF_SDK_ROOT}/components/drivers_nrf/hal/nrf_delay.c
${NRF_SDK_ROOT}/components/drivers_nrf/common/nrf_drv_common.c
${NRF_SDK_ROOT}/components/drivers_nrf/gpiote/nrf_drv_gpiote.c
${NRF_SDK_ROOT}/examples/bsp/bsp.c
main.c
${NRF_SDK_ROOT}/components/ble/common/ble_advdata.c
${NRF_SDK_ROOT}/components/ble/common/ble_conn_params.c
${NRF_SDK_ROOT}/components/ble/common/ble_srv_common.c
${NRF_SDK_ROOT}/components/ble/ble_radio_notification/ble_radio_notification.c
${NRF_SDK_ROOT}/components/toolchain/system_nrf51.c
${NRF_SDK_ROOT}/components/softdevice/common/softdevice_handler/softdevice_handler.c
)

add_executable(eddystone_beacon ${SOURCE_FILES} main.c eddystone.h eddystone.c)
