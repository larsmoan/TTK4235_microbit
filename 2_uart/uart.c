#include "uart.h"

void uart_init(){
    //UART_INT_RX
    GPIO0->PIN_CNF[6] = 0;
    //UART_INT_TX
    GPIO1->PIN_CNF[8] = 1;

    //Mulig den skal sette enable etc
    UART0->ENABLE[??] = 8;  //Usikker på pinne for ENABLE register??

    
}
