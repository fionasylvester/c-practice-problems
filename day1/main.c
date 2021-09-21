#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
#include "day1.h"

int main()
{
    //DAY 1 Problems
    printf("\n DAY 1 \n");
    uppercase_to_lowercase('H');
    printf("\n");
    area_of_a_circle(2);
    printf("\n");
    calculate_SI_CI(50,3,4);
    celsius_to_fahrenheit_and_viceversa(36,98.6);
    printf("\n");
    assert(is_even_or_odd(9) == 0);
    assert(is_even_or_odd(26) == 1);
    assert(is_leap_year(2000)==1);
    assert(is_leap_year(2001)==0);
    assert(power_using_left_shift(6,1)==12);
    printf("\n");

return 0;
}
