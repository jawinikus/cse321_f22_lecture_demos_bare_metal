// Starting from Oct 5 Bounce example
// #include "mbed.h"

// convert to interrupt based
//will need to update the bounce example

// Starting from Oct 5
#include "mbed.h"
#include <cstdint>
InterruptIn dog(PB_4); //creates ability for interrrupts related to PB4
//where to go? ISR constructor
void cat(void);//ISR


int val;
int main() {
  // bit 1 on clock bus
  RCC->AHB2ENR |= 0x2;

  // 14 and 15 on MODER -> PB7 Output
  // 01 val
  //   GPIOB->MODER |= 0x4000;
  //   GPIOB->MODER &=~(0x8000);

//want PB8 to be an output
//control its 16 and 17
int32_t offbit=0x20000;
int32_t onbit=0x10000;
GPIOB->MODER|=onbit; //set the one
GPIOB->MODER&=~offbit;//set the ones 

//pb4 input
//00 needed
offbit=0x300;
GPIOB->MODER&=~offbit;

//configure trigger and ISR
dog.rise(&cat);
dog.enable_irq(); // enables interrupts
GPIOB->ODR|=0x100;
  while (1) {
    
 } // new piece

 return 0;
}

void cat(void) {
  printf("Cat or dog, who will win?\n");
}