//17)	Write a C program to print multiplication table of any number.
#include <stdio.h>

void main()
{
    int n,i;
    printf("Enter a number to print all multiples of a number : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
        printf("%d * %d = %d\n",n,i,n*i);
}
