//9)	Write a C program to print all natural numbers from 1 to n. - using while loop
#include <stdio.h>

void main()
{
    int n,i;
    printf("Enter your number : ");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        printf("%d ",i);
        i=i+1;

    }
}
