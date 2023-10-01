//14)	Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>

void main()
{
    int i,n,s;
    n= 5;
    i = 1;
    s = 0;

    while(i<=n)
    {
        s = s+i;
        i++;
    }
    printf("Sum of natural numbers form 1 to %d is %d",n,s);

}
