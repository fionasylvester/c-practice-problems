#include<math.h>
#include<stdio.h>
#include<string.h>
int sum_of_five_digits_modulus(int input)
{
    int remainder, sum = 0;
    while(input != 0)
    {
        remainder = input % 10;
        sum = sum + remainder;
        input = input / 10;
    }
     return sum;
}



int is_prime_number(int input)
{
    int i; // flag = 0;

    for(i=2; i <= input/2; i++)
    {
        if(input % i == 0)
            return 0; // or flag = 1;
    }

    return 1;
}
int generate_first_n_prime_numbers(int limit)
{
    int count = 0, input = 2;
    printf(" the first %d prime numbers are  \n", limit);
    while(count < limit)
    {
        if(is_prime_number(input)){ // check if it is a prime number

            printf(" %d \t", input);
            count++; // keep track of prime numbers
        }

        input++; // choosing next number
    }

    return count;
}


int reverse_a_number(int input)
{
    //int orig = input;
    int reverse,remainder;
    while(input!=0)
    {
        remainder=input%10;
        reverse= reverse*10 + remainder;
        input/=10;
    }
    return reverse;

}

int palindrome(int input)
{
    int original=input;
    int remainder=0;
    int reverse=0;
    while(input!=0)
    {
        remainder=input%10;
        reverse= reverse*10 + remainder;
        input/=10;
    }
    if(original==reverse){
            return reverse;
    }
    else{
            return 0;
    }
}

int count_occurences_of_digit(int input, int digit)
{
    int count=0, rem=0;
    while(input>0){
        rem= input%10;
        if(rem == digit)
            count++;
        input =input/10;
    }
    return count;
}

int generate_series(int n)
{
    int temp=1,sum=0,i;
    for(i=1;i<=n;i++){
        sum=sum+temp;
        temp= (temp*10) + 1;

        }
    return sum;
}

int armstrong_number(int number)
{
    int rem=0,sum=0;
    int temp=number;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+pow(rem,3);
        temp=temp/10;

    }
    return sum;
}


int amicable(int n)
{
    int sum = 1;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            sum += i;
            if (n/i != i)
                sum += n/i;
        }
    }
    return sum;
}
void checkamicable(int a,int b)
{
    if(amicable(a) == b && amicable(b) == a)
    {
        printf("\n the numbers %d and %d are amicable", a,b);
    }

    else{
    printf("not amicable");
    }
}


int menudriven_calculator(int a,int b,char ch)
{
    if(ch)
    {
        printf(" \n menu driven calculator \n 1- addition 2-difference 3-product");
        switch(ch)
        {
            case 1 :printf("\n sum is %d", a+b);
            return a+b;
            break;
            case 2 :printf("\n difference is %d", a-b);
            return a-b;
            break;
            case 3 :printf("\n product is %d", a*b);
            return a*b;
            break;
            default : printf("not any of the entered choices");
        }
    }
}

void volume_of_cube(int side)
{
    int volume =side*side*side;
    printf("volume is %d" ,volume);
}
void volume_of_cuboid(int l,int w,int b)
{
    int volume= l*w*b;
    printf("the volume is %d", volume);
}
void volume_of_sphere(int radius)
{
    int volume = 4 * 3.14 * radius * radius;
    printf("volume is %d" ,volume);
}
void volume_of_cylinder(int radius, int height)
{
    int volume = height * 3.14 * radius * radius;
    printf("volume is %d" ,volume);
}
void volume_of_cone(int radius, int height)
{
    int volume = (height * 3.14 * radius * radius)/3;
    printf("volume is %d" ,volume);
}
void area_of_shapes(char ch)
{
    int side=0,l,b,w,radius, height;
    if(ch)
    {
        printf("\n 1- volume of a cube, 2- volume of cuboid 3-volume of sphere 4-volume of cylinder 5- volume of cone \n");
        switch(ch)
        {
        case 1 :
            printf("enter the side value");
            scanf("%d",&side);
            volume_of_cube(side);
            break;
        case 2:
            printf("enter the length, width and breadth");
            scanf("%d %d %d",&l,&w,&b);
            volume_of_cuboid(l,w,b);
            break;
        case 3:
            printf("enter the radius");
            scanf("%d", &radius);
            volume_of_sphere(radius);
            break;
        case 4:
            printf("enter the radius and height");
            scanf("%d %d", &radius, &height);
            volume_of_cylinder(radius, height);
            break;
        case 5:
            printf("enter the radius and height");
            scanf("%d %d", &radius, &height);
            volume_of_cone(radius, height);
            break;
        }
    }
}


int electricity_consumption(int input)
{
    int sum;
    if(input<=200)
    {
        sum=input * 1;
        return sum;
    }
    else if(input>200 && input<=300)
    {
        sum= 200 + ((input- 200)*1.5);
        return sum;
    }
    else if(input>300)
    {
        sum= 200+150+((input-300)*2);
        return sum;
    }
}
