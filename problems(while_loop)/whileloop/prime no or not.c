//34)	Write a C program to check whether a number is Prime number or not.

#include <stdio.h>

void main()
{
    int n,i=1,c=0;
    printf("Enter a number to check whether entered no. is prime or not : ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(n%i==0)
            c++;
        i++;
    }
    if (c==2)
        printf("Entered number is a prime number");
    else
        printf("Entered number is not a prime number");
}
