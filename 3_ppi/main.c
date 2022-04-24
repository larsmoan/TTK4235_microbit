#include "gpio.h"
#include "gpiote.h"
#include "ppi.h"

int main(){
    gpiote_init();
    init_PPI();

    GPIO0->PIN_CNF[28] = 1;
	GPIO0->PIN_CNF[11] = 1; 
	GPIO0->PIN_CNF[31] = 1; 
	GPIO1->PIN_CNF[5] = 1;  
	GPIO0->PIN_CNF[30] = 1; 

    int sleep = 0;
    int count = 0;
    while (1){

        count++; 

        sleep = 10000;
        while(--sleep);
    }
    return 0;
}