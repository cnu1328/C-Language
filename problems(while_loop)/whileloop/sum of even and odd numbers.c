//15)	Write a C program to find sum of all even numbers between 1 to n.
//16)	Write a C program to find sum of all odd numbers between 1 to n.

#include <stdio.h>

void main()
{
    int i,n,se,so;
    n=10;
    i=1;
    se =0;
    so=0;

    while(i<=n)
    {
        if(i%2==0)
            se =se+i;
        else
            so=so+i;
        i++;
    }
    printf("Sum of even numbers from 1 to %d is %d",n,se);
    printf("\n");
    printf("Sum of odd numbers from 1 to %d is %d",n,so);


}
