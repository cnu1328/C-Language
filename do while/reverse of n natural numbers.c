//10)	Write a C program to print all natural numbers in reverse (from n to 1). - using while loop

#include <stdio.h>

void main()
{
    int n,i;
    printf("Enter a number to print all natural numbers in reverse : ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
        printf("%d, ",i);
}
