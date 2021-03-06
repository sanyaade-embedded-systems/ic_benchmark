/*
 * uart.h
 *
 *  Created on: Apr 12, 2012
 *      Author: alexs
 */

#ifndef UART_H_
#define UART_H_

#define BUFFERED

typedef unsigned char uint8_t;

void usart_init( int baudrate );

void usart1_put(uint8_t ch);
uint8_t usart1_get(void);

void usart_puts(const char * string);



#endif /* UART_H_ */
