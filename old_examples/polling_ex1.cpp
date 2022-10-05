// //sept 30
// #include "mbed.h"

// int main(){
//     //enable 
// //use port B for out -> rows
// //use c for in -> column
// RCC->AHB2ENR|=0x6;
//     //mode
//     //4 outs and 4 in
//     //8, 9, 10, 11
//     //00 in, 01 is out
//     //pins 16-23
    
//     GPIOC->MODER&=~(0xFF0000);
//     GPIOB->MODER&=~(0xAA0000);
//     GPIOB->MODER|=0x550000;

//     //poll
//     //while loop
// while(1){
//     GPIOB->ODR=0x100;//turn on pin 8
//     if((GPIOC->IDR&0x100)==0x100){
//         printf("row 1 column 1");
//     }
//     else if((GPIOC->IDR&0x200)==0x200){
//         printf("row 1 column 2");
//     }
//     GPIOB->ODR=0x200;
//     if((GPIOC->IDR&0x100)==0x100){
//         printf("row 2 column 1");
//     }
//     else if((GPIOC->IDR&0x200)==0x200){
//         printf("row 2 column 2");
//     } 
// }

//     return 0;
// }