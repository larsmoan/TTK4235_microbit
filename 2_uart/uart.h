#pragma once
#include "gpio.h"



typedef struct NRF_UART_REG
{
    /* data */
};

void uart_init();
void uart_send(char letter);
char uart_read();
