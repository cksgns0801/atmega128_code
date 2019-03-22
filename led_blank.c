//led_blank

#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 16000000

int main(void)
{
    /* Replace with your application code */
	DDRB = 0xFF;
    while (1) 
    {	
		PORTB  = 0xff;	
		_delay_ms(1000);
		PORTB  = 0x00;
		_delay_ms(1000);
    }
}

