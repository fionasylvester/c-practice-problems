#include<math.h>
#include<stdio.h>
#define SQUARE(x)(x*x)
#define cat(a,b) a##b
#define ODD(n) ((2*n)-1)

//Day3_1 - WAP to convert binary to decimal
int binary_decimal_conversion(int input)
{
    int dec = 0, i = 0, rem;
    while (input != 0) {
        rem = input % 10;
        input /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}


//Day3_2 - Generate a sequence of numbers such that every number in the sequence is the sum of
//the previous three numbers. The first three numbers are 0,0,1.
int sequence_sum_of_three(int a, int b, int c)
{
    int i,n;
    int next= a+b+c;
    printf("enter no of terms in the sequence");
    scanf("%d",&n);
    printf("%d %d %d  ", a,b,c);
    for(i=4;i<n;i++)
    {
        printf(" %d", next);
        a=b;
        b=c;
        c=next;
        next= a+b+c;
    }
    return 0;
}

//Day3_3 - WAP to print the following sketch by taking in N as number of rows
int star_pattern(int N)
{
    int i,j,space;
    printf("\n");
    for(i=N;i>=1;i--){
        for(space=0;space<=N-i;space++){
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}


//Day3_4 - Write a C program, which will print two digit numbers whose sum of both digit is
//multiple of seven. e.g. 16,25,34.
void multiple_of_seven()
{
    int i,rem,sum,x;
    for(i=10;i<100;i++)
    {
        x=i;
        rem=x%10;
        x=x/10;
        sum= rem+x;
        if(sum==7){
            printf("%d \t",i);
        }

    }
}

//Day3_5 - Write a recursive function for calculating power of a number. Take base number and
//exponent from user.
int power_of_number(int base,int exponent)
{
    if(exponent>0)
        return base* pow(base,exponent-1);
    else
        return 1;

}

//Day3_6 - Write a recursive function for calculating factorial of a number.
int factorial(int input)
{
    if(input>0)
        return input* factorial(input-1);
    else
        return 1;
}

//Day 3_7 - Use recursive calls to evaluate F(x) = x + x3/3! + x5/5! + x7/7!+ …
int fx_function(int base, int exponent)
{
    if(exponent==0)
        return 0;
    else
        return (double)(base*ODD(exponent))/recursion(ODD(exponent)) + fx_function(base,exponent-1);
}
int recursion(int input)
{
    if(input>0)
        return input* recursion(input-1);
    else
        return 1;
}

//Day3_8 -  Concatenate two integer values using macros
void concat_usingmacros(int a,int b)
{

    printf("\n %d",cat(1,2));
}

//Day3_9 -  Find square of a number using macros.
void square_usingmacros(int n)
{
    printf("square is %d" ,SQUARE(n));
}



//Day3_10 - Write a menu driven program to display the mathematical functions like square root,
//natural log, log10x, power(x,n), Cos(x).
int menudriven_algebra(int a,int b,char ch)
{
    if(ch){
        printf("1=square root 2=logn 3=log10 4=power 5=cos");
    switch(ch)
    {
    case 1:
        return sqrt(a);
        break;
    case 2:
        return log(a);
        break;
    case 3:
        return log10(a);
        break;
    case 4:
        return pow(a,b);
        break;
    case 5:
        return cos(a);
        break;
    default:
        printf("incorrect choice provided");
        }
    }
}
