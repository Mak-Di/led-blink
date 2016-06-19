#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRD = 0x02;

  while(1)
  {
    PORTD = 0x02;
    _delay_ms(500);

    PORTD = 0x00;
    _delay_ms(500);
  }
  return 0;
}

