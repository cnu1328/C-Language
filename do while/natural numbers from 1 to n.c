//9)	Write a C program to print all natural numbers from 1 to n. - using while loop

#include <stdio.h>

void main()
{
    int i,n;
    printf("Enter a number to print all natural numbers from 1 to : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        printf("%d, ",i);
}
