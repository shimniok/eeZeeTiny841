###############################################################################
# Makefile for Updating ATtiny841 Fuses
###############################################################################

## Adjust these to your own programmer
##
PORT 			= usb
PROGRAMMER 		= dragon_isp

## General Flags
MCU 			= attiny841
AVRDUDE			= avrdude

# ATtiny841 Fuses
# HFUSE
#     7 RSTDISBL, disable reset (reset *enabled=1, reset disabled=0)
#     6 DWEN, enable debugWIRE (*disabled=1, enabled=0)
#     5 SPIEN, enable SPI programming (*enabled=0, disabled=1)
#     4 WDTON, watchdog timer permanently on (*off=1, on=0)
#     3 EESAVE, preserve EEPROM during chip erase (*disable=1, enable=0)
#   2:0 BODLEVEL, sets BOD trigger level (1.8V=111, 2.5V=101, 4.3V=100)
#
HFUSE	= 0xdf

# LFUSE
#     7 CKDIV8, divide clock by 8 (enable=0, *disable=1)
#     6 CKOUT, output sys clock on port pin (*disable=1, enable=0)
#     5 -
#     4 SUT, system startup time (14CK+16ms, see CKSEL for PD startup time)
#   3:0 CKSEL, select clock source
#        Source             			From PD		SUT|CKSEL
#		 ====================================================
#		*internal 8MHz			6CK		00010
#		 external			6CK		00000
#		 internal 32-512kHz		6CK		00100
#		 LF Xtal Osc			1K CK		00110
#		 LF Xtal Osc			32K		10110
#		 Xtal Osc, Cer Res 0.4-0.9MHz 	258 CK		01000
#		 Xtal Osc, Cer Res 0.4-0.9MHz	1K CK		11000
#		 Xtal Osc, Cer Res 0.4-0.9MHz	16K CK		01001
#		 Xtal Osc, Cer Res 0.9-3MHz	258 CK		01010
# 		 Xtal Osc, Cer Res 0.9-3MHz	1K CK		11010
#		 Xtal Osc, Cer Res 0.9-3MHz	16K CK		01011
#		 Xtal Osc, Cer Res 3-8MHz	258 CK		01100
#		 Xtal Osc, Cer Res 3-8MHz	1K CK		11100
#		 Xtal Osc, Cer Res 3-8MHz	16K CK		01101
#		 Xtal Osc, Cer Res >8MHz	258 CK		01110
#		 Xtal Osc, Cer Res >8MHz	1K CK		11110
#		*Xtal Osc, Cer Res >8MHz	16K CK		01111
#
# internal 8MHz, disable div 8, 6 CK startup
NOXTAL_LFUSE	= 0xe2
# external Xtal >8MHz, disable div 8, 16K CK startup
XTAL_LFUSE	= 0xcf

# EFUSE
#	7:5 ULPOSCSEL, ULP Oscillator Select (*32kHz=111, 64kHz=110, 128kHz=101, 256kHz=100, 512kHz=011)
# 	4:3 BODPD, Brown Out Disable, Power Down mode (*disabled=11, sampled=01, enabled=10)
# 	2:1 BODACT, Brown Out Disable, Active mode (*disabled=11, sampled=01, enabled=10)
# 	  0 SELFPRGEN, Self Program Enable (*disabled=1, enabled=0)
#
EFUSE	= 0xff

all:
	@echo "Update fuses on your ATtiny841."
	@echo "\tmake xtal -- update fuses to use onboard xtal, if installed."
	@echo "\tmake noxtal -- update fuses to use internal oscillator."

xtal:
	$(AVRDUDE) -p $(MCU) -c $(PROGRAMMER) -P $(PORT) -v -U lfuse:w:$(XTAL_LFUSE):m -U hfuse:w:$(HFUSE):m -U efuse:w:$(EFUSE):m

noxtal:
	$(AVRDUDE) -p $(MCU) -c $(PROGRAMMER) -P $(PORT) -v -U lfuse:w:$(NOXTAL_LFUSE):m -U hfuse:w:$(HFUSE):m -U efuse:w:$(EFUSE):m

