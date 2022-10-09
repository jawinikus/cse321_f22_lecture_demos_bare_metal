// // Starting from Sept 28 example

// // add in a serial monitor interaction to "see" better -> Invasive debugging is
// // your friend modify output pin control Add in addressing bounce
// // based on 9/28 code
// #include "mbed.h"
// int val;
// int main() {
//   // bit 1 on clock bus
//   RCC->AHB2ENR |= 0x2;

//   // 14 and 15 on MODER
//   // 01 val
//   //   GPIOB->MODER |= 0x4000;
//   //   GPIOB->MODER &=~(0x8000);
//   GPIOB->MODER = 0x4000;

//   // odr
//   // pin 7
//   GPIOB->ODR |= 0x80;

//   // Add in the switch... PC13

//   RCC->AHB2ENR |= 0x4;
//   GPIOC->MODER &= ~(0x0C000000);

//   while (1) {
//     // read the IDR

// printf("%d",val);
//     val=GPIOB->IDR;
//     // store
//     // wait
//     wait_us(100);
//     //stable val
//     if ((GPIOC->IDR & 0x2000) == 0x2000) {
//       GPIOB->ODR |= (0x80);
//       printf("PC13");
//       printf("help");
//     } else {
//       GPIOB->ODR &= ~(0x80);
//     }
//   } // new piece
//   return 0;
// }