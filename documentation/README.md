# eeZeeTiny841 User Guide

![eeZeeTiny841](images/eeZeeTiny841.jpg)

## Introduction

The new, powerful ATtiny841 features 14 pins, two USARTs, SPI, I2C slave, three timers, ADC and more. The eeZeeTiny841 board exposes all pins and adds a reset circuit, AVR ISP programming interface, bypass capacitors, and optional crystal: all in a compact breadboard-friendly form factor.

Want one? [Buy now on Tindie](https://www.tindie.com/products/bot_thoughts/eezeetiny841/).

## Pinout

![pinout](images/Tiny841_pinout.jpg)
https://github.com/shimniok/eeZeeTiny841/tree

## Getting Started

Click the links below to help you get started with your eeZeeTiny board.

  * First: [Assembling your board](Assembling.md)
  * Next: [You'll need a hardware programmer](HardwareProgrammer.md)

Now, select which environment to use for development:
  * [Getting started with Arduino](Arduino.md)
  * [Getting started with Atmel Studio](AtmelStudio.md) (Windows only)
  * [Getting started with avr-gcc](AvrGcc.md)

## Reference

### Fuses

* For eeZeeTiny841 fuses, see [ATtiny841 Fuses](Tiny841Fuses.md).
* For other eeZeeTiny boards, use the [Engbedded Fuse Calculator](http://www.engbedded.com/fusecalc/).

### Operating Conditions

Please use your ATtiny breakout boards with regulated supplies of 5V or less, with minimal ripple, at temperatures around 25C (77F). Do not use the boards in high temperature conditions.

### Default Image

During testing, I flash the *larson scanner* example software onto the chip and then test every pin for connectivity. You can find the code in the ```examples``` directory of this repo.
