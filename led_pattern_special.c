//led_pattern_special
#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 16000000
int main(void)
{
    /* Replace with your application code */
	DDRB = 0xFF;
    while (1) 
    {	
		PORTB  = 0x81;
		_delay_ms(1000);
		PORTB  = 0xC3;
		_delay_ms(1000);
		PORTB  = 0xE7;
		_delay_ms(1000);
		PORTB  = 0xFF;
		_delay_ms(1000);
		PORTB  = 0xE7;
		_delay_ms(1000);
		PORTB  = 0xC3;
		_delay_ms(1000);
		PORTB  = 0x81;
		_delay_ms(1000);
		PORTB  = 0x00;
		_delay_ms(1000);
		PORTB  = 0x7E;
		_delay_ms(1000);
		PORTB  = 0x3C;
		_delay_ms(1000);
		PORTB  = 0x18;
		_delay_ms(1000);
		PORTB  = 0x00;
		_delay_ms(1000);
		PORTB  = 0x18;
		_delay_ms(1000);
		PORTB  = 0x3C;
		_delay_ms(1000);
		PORTB  = 0x7E;
		_delay_ms(1000);
		PORTB  = 0xFF;
		_delay_ms(1000);
		PORTB  = 0x00;
		_delay_ms(1000);
		
		
    }
}

