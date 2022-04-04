#include "uart.h"



void uart_init(){
    //UART_INT_RX
    GPIO0->PIN_CNF[6] = 0;
    //UART_INT_TX
    GPIO1->PIN_CNF[8] = 1;

    //Gjøre noe med PSELTXD og RXD, what to do?
    UART0->PSEL_TXD = 0x28;
   
    //B og pin 6 høy
    UART0->PSEL_RXD = 6;

    //Sette baudrate
    UART0->BAUDRATE = 0x00275000;

    //Disconnecting
    UART0->PSEL_RTS = 1 << 31;
    UART0->PSEL_CTS = 1 << 31;

    //Mulig den skal sette enable etc
    UART0->ENABLE = 4;  

     //Eget enable register?
    UART0->TASKS_STARTRX = 1;
}



void uart_send(char letter){
    UART0->TASKS_STARTTX = 1;

    UART0->TXD = letter;
    while (UART0->EVENTS_TXDRDY != 1);

    UART0->EVENTS_TXDRDY = 0;
    UART0->STOPTX = 1;
}


char uart_read(){
    if(UART0->EVENTS_RXDRDY == 0){
        return '\0';  
    }
    char letter = UART0->RXD;
    return letter;
}

