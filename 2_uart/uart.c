#include "uart.h"



void uart_init(){
    //UART_INT_RX
    GPIO0->PIN_CNF[6] = 0;
    //UART_INT_TX
    GPIO1->PIN_CNF[8] = 1;

    //Gjøre noe med PSELTXD og RXD, what to do?



    //Mulig den skal sette enable etc
    UART0->ENABLE = 8;  //Usikker på pinne for ENABLE register??

   
    //Sette baudrate
    UART0->BAUDRATE = 0x00275000;

    //Disconnecting
    UART0->PSEL_RTS = 1;
    UART0->PSEL_CTS = 1;

    //Eget enable register?
    UART0->TASKS_STARTRX = 1;

    
}
