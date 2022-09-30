// //Sept 28
// #include "mbed.h"

// int main(){
//     RCC->AHB2ENR|=0x4;
//     //want 10000
//     GPIOC->MODER|=0x10000; //
//     GPIOC->MODER&=~(0xE0000); //
//    RCC->AHB2ENR|=0x2;

//   // 14 and 15 on MODER
//   // 01 val
//   GPIOB->MODER |= 0x4000;
//   GPIOB->MODER &=~(0x8000);
// GPIOB->MODER=0x4000;
//       while(1){
//           GPIOC->ODR|=0x100;
//       if((GPIOC->IDR&0x200)==0x200){ //pc9
//         GPIOB->ODR |=(0x80);
//       }
//         else{
// GPIOB->ODR&=~(0x80);
// }
//   }//new piece
//   return 0;
// }