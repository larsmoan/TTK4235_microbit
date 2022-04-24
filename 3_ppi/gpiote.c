#include "gpiote.h"

void gpiote_init(){
    GPIOTE->CONFIG[0] = ((1) | (14<<8)  | (2<<16));
    GPIOTE->CONFIG[1] = ((3) | (21<<8)  | (3<<16)); 
    GPIOTE->CONFIG[2] = ((3) | (22<<8)  | (3<<16)); 
    GPIOTE->CONFIG[3] = ((3) | (15<<8)  | (3<<16)); 
    GPIOTE->CONFIG[4] = ((3) | (24<<8)  | (3<<16)); 
    GPIOTE->CONFIG[5] = ((3) | (19<<8)  | (3<<16)); 
}
