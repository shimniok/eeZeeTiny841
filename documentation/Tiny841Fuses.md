# ATtiny841 Fuses

When eeZeeTiny841 ships, the fuses are set as indicated with \* below.

**Note**: If your board has a crystal oscillator, you'll want to change LFUSE as indicated by \*\*

### HFUSE
Ships with HFUSE=0xDF

| Bit # | Bit Name | Use | Settings |
|------:|----------|-----|----------|
| 7 | RSTDISBL | disable reset | disabled=0, enabled=1* |
| 6 | DWEN | enable debugWIRE | enabled=0, disabled=1* |
| 5 | SPIEN | enable SPI programming | *enabled=0, disabled=1 |
| 4 | WDTON | watchdog timer permanently on | on=0 off=1* |
| 3 | EESAVE | preserve EEPROM during chip erase | enable=0, disable=1* |
| 2:0 | BODLEVEL | sets brown out disable trigger level, see EFUSE | 1.8V=111*, 2.5V=101 4.3V=100 |

### LFUSE
Ships with LFUSE=0xE2

| Bit # | Bit Name | Use | Settings |
|------:|----------|-----|----------|
| 7 | CKDIV8 | divide clock by 8 | enable=0, disable=1* |
| 6 | CKOUT | output sys clock on port pin | disable=1*, enable=0 |
| 5 | Not used | Not used | set to 0 |
| 4 | SUT | system startup time (SUT) | see CKSEL |
| 3:0 | CKSEL | select clock source| see CKSEL |

#### CKSEL
| Source | From PD SUT | CKSEL bits |
|--------|-------------|------------|
| internal 8MHz | 6CK | 00010* |
| external | 6CK | 00000 |
| internal 32-512kHz | 6CK | 00100 |
| LF Xtal Osc | 1K CK | 00110 |
| LF Xtal Osc | 32K | 10110 |
| Xtal Osc, Cer Res 0.4-0.9MHz | 258 CK | 01000 |
| Xtal Osc, Cer Res 0.4-0.9MHz | 1K CK | 11000 |
| Xtal Osc, Cer Res 0.4-0.9MHz | 16K CK | 01001 |
| Xtal Osc, Cer Res 0.9-3MHz | 258 CK | 01010 |
| Xtal Osc, Cer Res 0.9-3MHz | 1K CK | 11010 |
| Xtal Osc, Cer Res 0.9-3MHz | 16K CK | 01011 |
| Xtal Osc, Cer Res 3-8MHz | 258 CK | 01100 |
| Xtal Osc, Cer Res 3-8MHz | 1K CK | 11100 |
| Xtal Osc, Cer Res 3-8MHz | 16K CK | 01101 |
| Xtal Osc, Cer Res >8MHz | 258 CK | 01110 |
| Xtal Osc, Cer Res >8MHz | 1K CK | 11110 |
| Xtal Osc, Cer Res >8MHz | 16K CK | 01111** |

### EFUSE
Ships with EFUSE=0xFF

| Bit # | Bit Name | Use | Settings |
|------:|----------|-----|----------|
|	7:5 | ULPOSCSEL | ULP Oscillator Select | 32kHz=111*, 64kHz=110, 128kHz=101, 256kHz=100, 512kHz=011 |
| 4:3 | BODPD | Brown Out Disable, Power Down mode | disabled=11*, sampled=01, enabled=10 |
| 2:1 | BODACT | Brown Out Disable, Active mode | disabled=11*, sampled=01, enabled=10 |
| 0 | SELFPRGEN | Self Program Enable | disabled=1*, enabled=0 |
