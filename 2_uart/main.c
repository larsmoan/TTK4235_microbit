#include "uart.h"
#include "gpio.h"



int main(){
    gpio_init();
    uart_init();
    while (1){
        //Button A is pressed
        if( !(GPIO0->IN & (1 << 14) )){
            //Ønsker å sende A
            uart_send('A');
        }
        else if( !(GPIO0->IN & (1 << 23)) ){
            uart_send('B');
        }
        
        if (uart_read() != '\0'){
            gpio_lights_toggle();
        }

    }
    return 0; 
}