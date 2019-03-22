//led_pattern_on
#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 16000000

int main(void)
{
    /* Replace with your application code */
	int a,i;
	DDRB = 0xFF;

    while (1)
    {	
		a=0x01;
		for(i=0;i<8;i++)
		{
			PORTB  = a;
			a=a<<1;
			_delay_ms(100);
		}
		a=0x80;
		for(i=0;i<8;i++)
		{
			PORTB  = a;
			a=a>>1;
			_delay_ms(100);
		}
	}
}




