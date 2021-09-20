
#include<math.h>
#include<stdio.h>
#include<string.h>

void uppercase_to_lowercase(char upper)
{
    char lower;
    int ascii;
    ascii = upper;
    lower = ascii+32;
    printf("the lowercase character of %c is %c",upper,lower);
}


//area of a circle
void area_of_a_circle(int radius)
{
    float pie= 3.14;
    float area = pie*radius*radius;
    printf("area of a circle of radius %d is %.2f",radius,area);
}


int is_even_or_odd(int number)
{
    if(number % 2 == 0)
        return 1;
    else
        return 0;
}



int is_leap_year(int year)
{
    if(year%4==0 && ((year%400==0)||(year%100!=0)))
        return 1;
    else
        return 0;

}


void calculate_SI_CI(int principal,int time, int rate)
{
    float SI,CI;
    if(principal)
    {
        SI=((principal*time*rate)/100);
        CI = principal*(pow((1+rate/100),time));
        printf("the simple interest is %.2f and the compound interest is %.2f",SI,CI);
    }

}

void celsius_to_fahrenheit_and_viceversa(float celsius, float fahrenheit)
{
    if (celsius>0)
    {
        fahrenheit=(1.8*celsius)+ 32;
        celsius= 0.5*(fahrenheit-32);
        printf("\n");
        printf("the value of %.2f celsius to fahrenheit is %.2f \n",celsius,fahrenheit);
        printf("the value of %.2f fahrenheit to celsius is %.2f ",fahrenheit,celsius );
    }
}

int power_using_left_shift(int input1,int power)
{
    int a= input1<<power;
    return a;
}

