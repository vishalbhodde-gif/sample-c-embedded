#define F_CPU160000000UL

#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
  DDRD |= (1 << PD4);

  while(1)
  {
    PORTD |= (1 << PD4);
    PORTD & = ~(1 << PD4);
  }
  return0;
}