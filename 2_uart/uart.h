#pragma once
#include "gpio.h"


#define UART0 ((NRF_UART_REG*)0x40002000)   

typedef struct 
{
    volatile uint32_t TASKS_RX[0];  //Mulig feil
    volatile uint32_t ENABLE[320];
    volatile uint32_t PSEL.RTS[322];
    volatile uint32_t PSEL.TXD[323]; // offset 0x514
    volatile uint32_t PSEL.CTS[324];
    volatile uint32_t PSEL.RXD[325]; // offset 0x50C
    volatile uint32_t BAUDRATE[329]; // offset for 0x524

} NRF_UART_REG;

void uart_init();
void uart_send(char letter);
char uart_read();
