avr-gcc -g -Os -mmcu=atmega8 -c main.c
avr-gcc -g -mmcu=atmega8 -o main.elf main.o
avr-objcopy -j .text -j .data -O ihex main.elf main.hex
avrdude -c usbasp -p atmega8 -U flash:w:main.hex

Distributor ID: Ubuntu
Description:    Ubuntu 15.04
Release:        15.04
Codename:       vivid

gcc version 4.8.1 (GCC)
avrdude: Version 6.1, compiled on Oct 24 2014 at 10:33:0
