
#include <stdio.h>
#include <string.h>


//Day4/5_1 -  WAP to sort the given array in ascending and descending order.
void ascending_descending()
{
    int i,j,a[]={5,4,2,9,6},n=5,temp,p,q,temp1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            { if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending order of an array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]) ;
    }

    for(p=0;p<n;p++)
    {
        for(q=p+1;q<n;q++)
        {
            if(a[p]<a[q])
            {
                temp1=a[p];
                a[p]=a[q];
                a[q]=temp1;
            }
        }
    }
    printf("\n Descending order of an array : \n");
    for(p=0;p<n;p++)
    {
        printf("%d ",a[p]) ;
    }
}


//Day4/5_2 -Write a program to swap two numbers using function
void swap_withfunction(int a,int b)
{
    swap(a, b);
}
void swap(int x, int y)
{
    int temp;

    temp = x;
    x    = y;
    y    = temp;

    printf("\nAfter swapping: a = %d and b = %d\n", x, y);
}


//Day4/5_3 - WAP to find minimum and maximum elements in a given array using the function
int min_max_function()
{
    int arr[] = { 5, 7, 2, 4, 9, 6 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int min, max;
    findMinAndMax(arr, n, min, max);
    printf(" min=%d , max=%d", min,max);
    return 0;
}

void findMinAndMax(int arr[], int n, int *min, int *max)
{
    max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
        else if (arr[i] < min) {
            min = arr[i];
        }
    }
}

//Day4/5_5 - WAP to store 10 numbers in an array. Remove the duplicate entries in the array.
int delete_duplicate()
{
	int a[]={1,2,3,1,2,3},j,k,i;
	int size=5;
	for (i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
    		if(a[i] == a[j])
    		{
    			for(k = j; k < size; k++)
    			{
    				a[k] = a[k] + a[k+1];
				}
				size--;
				j--;
			}
		}
	}
 	for (i = 0; i < size; i++)
  	{
 		printf("\n %d\t", a[i]);
  	}
 	return 0;
}


//Day4/5_6 - WAP to search for a given integer in an array using the linear search technique.
int search_element()
{
   int array[]={5,4,6,7,8,9},i,n=6,search;

   printf("Enter the number to search\n");
   scanf("%d", &search);

   for (i = 0; i < n; i++)
   {
      if (array[i] == search)
      {
         printf("%d is present at location %d.\n", search, i+1);
         break;
      }
   }
   if (i == n)
      printf("%d is not present in array.\n", search);

   return 0;
}


//Day4/5_7 - WAP to search for a given integer in an array using the binary search technique.

int search_element_binary()
{
   int array[]={1,4,6,7,8,9},i,search,n;
   printf("\nEnter value to search :: ");
   scanf("%d",&search);
   int first = 0;
   int last = n - 1;
   int middle = (first+last)/2;
    while( first <= last ){
        if ( array[middle] < search )
                first = middle + 1;
        else if ( array[middle] == search ) {
                printf("\n %d is at location %d.\n", search, middle+1);
                break;
        }
        else
                last = middle - 1;
        middle = (first + last)/2;
   }
   if ( first > last )
      printf(" %d is not present in the array\n", search);
return 0;
}



//Day4/5_8-  Write a C program, that reads list of n integer and print sum of product of consecutive
//numbers



//Day4/5 9-    WAP to read a string from the user and find the length of string.
int string_length()
{
    char str[]={"hello"};
    int i;
    for (i = 0; str[i] != '\0'; ++i);
    printf("Length of Str is %d", i);
    return 0;
}


//Day4/5 10-   Input date, month and year from the user, and using switch case, display in
//worded format
void calender(int date, int month, int year)
{
    int ch=month;
    if(date>1 && date<31){
        printf("%d", date);
        switch(ch)
        {
            case 1:
            printf("January");
            printf("%d",year);
            break;
            case 2:
            printf("February");
            printf("%d",year);
            break;
            case 3:
            printf("March");
            printf("%d",year);
            break;
            case 4:
            printf("April");
            printf("%d",year);
            break;
            case 5:
            printf("May");
            printf("%d",year);
            break;
            case 6:
            printf("June");
            printf("%d",year);
            break;
            case 7:
            printf("July");
            printf("%d",year);
            break;
            case 8:
            printf("August");
            printf("%d",year);
            break;
            case 9:
            printf("september");
            printf("%d",year);
            break;
            case 10:
            printf("october");
            printf("%d",year);
            break;
            case 11:
            printf("november");
            printf("%d",year);
            break;
            case 12:
            printf("December");
            printf("%d",year);
            break;
            default:
                printf("invalid");
        }
    }
    else
        printf("invalid");
}


//Day4/5 11-   Write a function that will scan a character string passed as an argument and convert
//all lower-case characters into their upper-case equivalents.
void convert_lowertoupper()
{
    char str[]={"HeLlo"};
    int i;
    printf("%s in upper case is ",str);
    for(i=0;str[i];i++)
    {
            if(str[i]>96 && str[i]<123)
            str[i]-=32;
    }
    printf("%s",str);
}



//Day4/5 12-  Write a program to read a string from the user and reverse the string.
int reverse_string()
{
  	char Str[]={"hello"}, RevStr[100];
  	int i, j, len;
  	j = 0;
  	len = strlen(Str);

  	for (i = len - 1; i >= 0; i--)
  	{
  		RevStr[j++] = Str[i];
  	}
  	RevStr[i] = '\0';

  	printf("\n String after Reversing = %s", RevStr);

  	return 0;
}


/*

//Day4/5 13-  WAP to construct 5 * 5 matrix and display the contents. Use functions for
//construction and display of matrix
void  matrix_construction(int a,int b)
{
    int i,j,array[5][5];
     printf("\nEnter values to the matrix :: \n");
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                 printf("\nEnter a[%d][%d] value :: ",i,j);
                 scanf("%d", &array[i][j]);
        }
    }

    printf("\nThe given matrix is \n\n");
        for (i = 0; i < a; ++i)
        {
        for (j = 0; j < b; ++j)
        {
            printf("\t%d", array[i][j]);
        }
        printf("\n\n");
    }
}


//Day4/5 14-  WAP to add two matrices
void  matrix_addition(int x,int y)
{
    int i,j,a[5][5],b[5][5],sum[5][5];
     printf("\nEnter values to the first matrix :: \n");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                 printf("\nEnter a[%d][%d] value :: ",i,j);
                 scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter values to the second matrix :: \n");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                 printf("\nEnter b[%d][%d] value :: ",i,j);
                 scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < x; ++i)
    for (j = 0; j < y; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("\nSum of two matrices: \n");
  for (i = 0; i < x; ++i)
    for (j = 0; j < y; ++j) {
      printf(" \t %d   ", sum[i][j]);

    }
}
*/

//Day4/5 15-  WAP to check whether 2 matrixes are same
void matrix_compare(int a,int b)
{
    int A[5][5] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};

    int B[5][5] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};

    if (areSame(A, B))
        printf("\n Matrices are identical");
    else
        printf("\n Matrices are not identical");
}

int areSame(int A[5][5], int B[5][5])
{
    int i, j;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (A[i][j] != B[i][j])
                return 0;
    return 1;
}


//Day4/5 16-  WAP program to check if given matrix is a sparse matrix.
void sparse_matrix(int m,int n)
{
    int array[5][5]={ {0,0,0,1},
                    {0,0,0,2},
                    {3,0,0,0},
                    {0,0,0,6},
                    {0,0 ,0,0}};

    int i, j;
    int counter = 0;
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            if (array[i][j] == 0)
            {
                ++counter;
            }
        }
    }
    if (counter > ((m * n) / 2))
    {
        printf("\n The given matrix is sparse matrix \n");
    }
    else
    printf("\n The given matrix is not a sparse matrix \n");
}

