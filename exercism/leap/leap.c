#include "leap.h"

bool is_evenly_divisible(int dividend, int modulus){
    return dividend % modulus == 0;
}

bool is_leap_year(int year){
    return is_evenly_divisible(year, 4) && (!is_evenly_divisible(year, 100) || is_evenly_divisible(year, 400));
}