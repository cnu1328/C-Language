//18)	Write a C program to count number of digits in a number.re

#include <stdio.h>

void main()
{
    int n,c=0;
    printf("Enter your number : ");
    scanf("%d",&n);

    while(n>0)
    {
        c++;
        n = n/10;
    }
    printf("Total no.of digis are %d ",c);
}
