// // 9/28

// //9 26 code plu 9/28 fix
// #include "mbed.h"

// int main() {
//       // bit 1 on clock bus
//   RCC->AHB2ENR|=0x2;

//   // 14 and 15 on MODER
//   // 01 val
// //   GPIOB->MODER |= 0x4000;
// //   GPIOB->MODER &=~(0x8000);
// GPIOB->MODER=0x4000;

//   // odr
//   // pin 7
//   GPIOB->ODR|=0x80;
  
//   //Add in the switch... PC13

// RCC->AHB2ENR|=0x4;
// GPIOC->MODER&=~(0x0C000000);

//   while(1){
//       if((GPIOC->IDR&0x2000)==0x2000){
//         GPIOB->ODR |=(0x80);
//       }
//         else{
// GPIOB->ODR&=~(0x80);
// }
//   }//new piece
//   return 0;
// }