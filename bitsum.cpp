#include <iostream>
#include "bitsum.h"

int numberOfOnes(unsigned long int value) {
  // do stuff here
    unsigned long int number = 0; 
    while (value) { 
        number = number + (value & 1); 
        value >>= 1; 
    } 
    return number; 
}
