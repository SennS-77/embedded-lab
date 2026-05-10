# embedded-lab

Goal: Build a clean PlatformIO-based embedded systems lab for Arduino UNO experiments, serial logging, and future industrial-control practice.

## Current status

- [x] PlatformIO project builds and runs
- [x] Arduino UNO hello logging firmware
- [ ] Serial monitoring workflow
- [ ] GitHub repository setup
- [ ] RS485 communication experiments
- [ ] Relay-controlled power cycle tests
- [ ] Python automation and regression tests

## Hardware

- Arduino UNO
- USB cable
- Built-in LED for initial firmware test

## Software

- VS Code
- PlatformIO
- Git
- GitHub SSH authentication

## First firmware test

The current firmware:

- starts Serial at 115200 baud
- prints a boot message
- toggles the built-in LED every second
- prints uptime in milliseconds

## Notes

This repository is being used as a foundation for embedded systems practice and later industrial communication experiments.