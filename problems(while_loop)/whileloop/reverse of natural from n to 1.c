//10)	Write a C program to print all natural numbers in reverse (from n to 1). - using while loop

#include <stdio.h>

void main()
{
    int n,i;
    printf("Enter your number : ");
    scanf("%d",&n);

    i = n;
    while (i>0)
    {
        printf("%d ",i);
        i=i-1;
    }




}
