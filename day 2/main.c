#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
#include "day2.h"

int main()
{
    //DAY 2 Problems
    printf("\n DAY 2 \n");
    assert(reverse_a_number(12345)== 54321);
    assert(sum_of_five_digits_modulus(12359)==20);
    assert(generate_first_n_prime_numbers(6) == 6);
    assert(palindrome(121)==121);
    assert(count_occurences_of_digit(12111,1)==4);
    assert(generate_series(3)==123);
    assert(armstrong_number(153)==153);
    checkamicable(284,220);
    assert(menudriven_calculator(2,3,1)==5);
    area_of_shapes(3);
    assert(electricity_consumption(400)==550);

return 0;
}
