#include "queen_attack.h"
#include <stdlib.h>
#include <stdbool.h>

static bool positions_equal(position_t a, position_t b) {
    return a.row == b.row && a.column == b.column;
}

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    int positions[] = {queen_1.row, queen_1.column, queen_2.row, queen_2.column};
    
    for(int i = 0; i < 4; i++){
        if(positions[i] < 0 || positions[i] > 7 || positions_equal(queen_1, queen_2)) {
            return INVALID_POSITION;
        }
    }
    
    if((queen_1.row == queen_2.row) || (queen_1.column == queen_2.column) || (abs(queen_1.row - queen_2.row)) == (abs(queen_1.column - queen_2.column))){
        return CAN_ATTACK;
    } else {
        return CAN_NOT_ATTACK;
    }
    
}