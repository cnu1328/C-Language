//31)	Write a C program to calculate factorial of a number.
#include <stdio.h>

void main()
{
    int n,fact,i;
    printf("Enter your number to find factorial : ");
    scanf("%d",&n);

    fact = 1;
    i = n;
    while(i!=0)
    {
        fact = fact*i;
        i--;

    }
    printf("Factorial of %d number is %d",n,fact);
}
