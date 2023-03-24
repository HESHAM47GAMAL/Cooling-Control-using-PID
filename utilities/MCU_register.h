/******************************************
* Module: MCU - Registers
*
* File Name: MCU_Register.h
*
* Description: define all peripheral register 
*
* Author: Hesham Shehata
*
******************************************/

#ifndef MCU_REGISTER_H_
#define MCU_REGISTER_H_


/**********************************************************
*  Special Function IO Register
**********************************************************/
#define  SFIOR *((volatile uint8_t*)0x50)

/**********************************************************
* GPIO Registers
**********************************************************/
//PORTA Registers
#define PORTA *((volatile uint8_t*)0x3B) //8 bits registers
#define DDRA  *((volatile uint8_t*)0x3A) //8 bits registers
#define PINA  *((volatile uint8_t*)0x39) //8 bits registers

//PORTB
#define PORTB *((volatile uint8_t*)0x38) //8 bits registers
#define DDRB  *((volatile uint8_t*)0x37) //8 bits registers
#define PINB  *((volatile uint8_t*)0x36) //8 bits registers

//PORTC
#define PORTC *((volatile uint8_t*)0x35) //8 bits registers
#define DDRC  *((volatile uint8_t*)0x34) //8 bits registers
#define PINC  *((volatile uint8_t*)0x33) //8 bits registers

//PORTD
#define PORTD *((volatile uint8_t*)0x32) //8 bits registers
#define DDRD  *((volatile uint8_t*)0x31) //8 bits registers
#define PIND  *((volatile uint8_t*)0x30) //8 bits registers

/**********************************************************
* Timer Registers
**********************************************************/
//Timer 0
#define TCCR0  *((volatile uint8_t*)0x53) //8 bits registers
#define TCNT0  *((volatile uint8_t*)0x52) //8 bits registers
#define OCR0   *((volatile uint8_t*)0x5C) //8 bits registers
#define TIMSK  *((volatile uint8_t*)0x59) //8 bits registers
#define TIFR   *((volatile uint8_t*)0x58) //8 bits registers

/**********************************************************
* External Interrupt Registers
**********************************************************/
#define MCUCR  *((volatile uint8_t *)0x55)
#define MCUCSR *((volatile uint8_t *)0x54)
#define GICR   *((volatile uint8_t *)0x5B)
#define GIFR   *((volatile uint8_t *)0x5A)

/**********************************************************
* ADC Registers
**********************************************************/
#define ADMUX  *( (volatile uint8_t *)0x27)
#define ADCSRA *( (volatile uint8_t *)0x26)
#define ADCH   *( (volatile uint8_t *)0x25)
#define ADCL   *( (volatile uint8_t *)0x25)

/**********************************************************
* ADC Registers
**********************************************************/

#define SPCR   *((volatile uint8_t *) 0x2D)
#define SPSR   *((volatile uint8_t *) 0x2E)
#define SPDR   *((volatile uint8_t *) 0x2F)

#define SPE    7
#define MSTR   4
#define SPI2X  0
#define SPIF   7
#define SPR1   1
#define SPR0   0
#define CPHA   2
#define CPOL   3


#endif /* MCU_REGISTER_H_ */
