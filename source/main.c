/*	Author: kvi001
 *  Partner(s) Name: Brittiney Sempasa
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

unsigned char SetBit(unsigned char x, unsigned char k, unsigned char b) {
	return (b ? x | (0x01 << k) : x & ~(0x01 << k));
}
unsigned char GetBit(unsigned char x, unsigned char k) {
	return ((x & (0x01 << k)) != 0);
}

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char temp = 0x00;
//	unsigned char tempB = 0x00;
	unsigned char count = 0x00;
    /* Insert your solution below */
    while (1) {

	temp = PINA & 0x01;
	if (temp == 0x01) {
		count = count + 1;
	}
	temp = PINA & 0x02; 
	if (temp == 0x02) {
		count = count + 1;
	}
	temp = PINA & 0x04;	
	if (temp == 0x04) {
		count = count + 1;
	} 
	temp = PINA & 0x08;
	if (temp == 0x08) {
		count = count + 1;
	} 
	temp = PINA & 0x10;
	if (temp == 0x10) {
		count = count + 1;
	}
	temp = PINA & 0x20;
	if (temp == 0x20) {
		count = count + 1;
	}
	temp = PINA & 0x40;
	if (temp == 0x40) {
		count = count + 1;
	}
	temp = PINA & 0x80;
	if (temp == 0x80) {
		count = count + 1;
	}
	PORTC = count;		
 
/*	tempA = PINA & 0x00;
	tempB = PINA & 0x00; 
	 for(int i = 0; i < 8; ++i) {
 * 		if (GetBit(tempA, i)) {
 * 			count = count + 1;
 * 		}
 * 		if (GetBit(tempB, i)) {
 * 			count = count + 1;
 * 		}
 * 	}
 * 	PORTC = count;
*/ 
  }
    return 1;
}
