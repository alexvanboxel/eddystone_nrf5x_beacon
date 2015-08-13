# Eddystone nRF5x Beacon 

This is a Eddystone implementation for the Nordic SemiConductor's nRF5x chipset. This is not intended as a production ready, nor the most performant implementation. It's meant as an example for other people quickly wanting to play with an Eddystone beacon.

## Eddystone, what is it?

Eddystone is a protocol specification that defines a Bluetooth low energy (BLE) message format for proximity beacon messages. It describes several different frame types that may be used individually or in combinations to create beacons that can be used for a variety of applications.

Find out more at [https://github.com/google/eddystone]

## Implementation

This implementation currently only works with the nRF51-DK (pca10028) with the S110 softdriver. The make file is for use with the gcc compiler.

## CMakeLists note

The CMakeLists.txt is not a full CMake makefile but is provided for CLion (the editor the author uses to code).
