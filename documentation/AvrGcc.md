# Getting Started With avr-gcc

## IDE

Here are a few of the options for writing code for AVR:

Lightweight, simple, code-aware text editors include:
  * Linux: Atom, Geany, Emacs
  * Windows: Notepad++, Emacs
  * MacOS X: TextWrangler, Emacs

Eclipse and the [AVR Plugin](http://avr-eclipse.sourceforge.net/wiki/index.php/The_AVR_Eclipse_Plugin) provide a full, if complex, IDE environment for developing for AVR processors. It is cross-platform (Linux, Mac, Windows).

## Toolchain

  * For Windows or Linux: Install  [Atmel AVR Toolchain](http://www.atmel.com/products/microcontrollers/avr/tinyAVR.aspx?tab=tools) for either Windows or Linux.
  * For Mac, use [CrossPack for AVR](https://www.obdev.at/products/crosspack/index.html)

## Flashing with avrdude

* Install the latest version of [avrdude](http://www.nongnu.org/avrdude/).
* For eeZeeTiny841, add the contents of [add\_to\_avrdude.conf](https://raw.githubusercontent.com/shimniok/eeZeeTiny841/master/setup/add_to_avrdude.conf) to your ```avrdude.conf``` so avrdude will recognize the ATtiny841 (still true as of May 17, 2017).

**Please Note:** The location of ```avrdude.conf``` depends on your operating system, and the method of installation (rpm, distro, which package used, etc.)

## Hardware Programmer

You will also need a [Hardware Programmer](HardwareProgrammer.md)

## Example Code

You can find example code and makefiles in the ```examples``` subdirectory of this repo.
