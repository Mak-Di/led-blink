avr-gcc -g -Os -mmcu=atmega8 -c main.c<br />
avr-gcc -g -mmcu=atmega8 -o main.elf main.o<br />
avr-objcopy -j .text -j .data -O ihex main.elf main.hex<br />
avrdude -c usbasp -p atmega8 -U flash:w:main.hex
<br />
<br />
Distributor ID: Ubuntu<br />
Description:    Ubuntu 15.04<br />
Release:        15.04<br />
Codename:       vivid<br />
<br />

gcc version 4.8.1 (GCC)<br />
avrdude: Version 6.1, compiled on Oct 24 2014 at 10:33:0
