#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include<assert.h>
int main()
{
    printf("Day 3 assignment problems \n");
    assert(binary_decimal_conversion(110110)==54);             //(3_1)WAP to convert binary to decimal
    sequence_sum_of_three(0,1,1);
    multiple_of_seven();
    star_pattern(4);
    assert(power_of_number(2,3)==8);
    assert(factorial(3)==6);
    fx_function(2,1);
    assert(menudriven_algebra(9,0,1)==3);
    square_usingmacros(5);
    concat_usingmacros(2,2);
}
