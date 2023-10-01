//14)	Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>

void main()
{
    int n,i,sum=0;
    printf("Enter a number to print sum of all numbers from 1 to : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        sum = sum+i;
    printf("Sum of all natural numbers from 1 to %d is %d",n,sum);
}
