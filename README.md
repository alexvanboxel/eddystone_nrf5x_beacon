# Eddystone nRF5x Beacon 

This is a Eddystone implementation for the Nordic SemiConductor's nRF5x chipset. This is not intended as a production ready, nor the most performant implementation. It's meant as an example for other people quickly wanting to play with an Eddystone beacon.

## Eddystone, what is it?

Eddystone is a protocol specification that defines a Bluetooth low energy (BLE) message format for proximity beacon messages. It describes several different frame types that may be used individually or in combinations to create beacons that can be used for a variety of applications.

Find out more at [https://github.com/google/eddystone]

## Implementation

This implementation currently only works with the nRF51-DK (pca10028) with the S110 softdriver. The make file is for use with the gcc compiler.

This example build against version 9.0.0 of the nRF SDK). With the SDK, gcc and segger's JLink installed (I'll refer you to [https://www.nordicsemi.com/] for tutorials how to get started with the nRF SDK) this work to get a working beacon:

```
cd pca10028
make NRF_SDK_ROOT=/SDK/nRF51/9.0.0
JLinkExe -device nrf51822_xxaa -if swd -speed 4000 -commanderscript upload.jlink
```

This beacon uses a fixed URL and fixed UID so change it to your own.

## CMakeLists note

The CMakeLists.txt is not a full CMake makefile but is provided for CLion (the editor the author uses to code).
