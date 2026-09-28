#include "grains.h"

uint64_t square(uint8_t index) {
    uint64_t fact = 1;
    if(index == 0 || index == 65){
        return 0;
    }
    for(int i = 1; i < index; i++){
        fact *= 2;
    }
    return fact;
}

uint64_t total(void) {
    uint64_t sum = 0;
    for(uint8_t i = 1; i <= 64; i++) {
        sum += square(i);
    }
    return sum;
}