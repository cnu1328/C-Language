//18)	Write a C program to count number of digits in a number.
#include <stdio.h>

void main()
{
    int n,i,c=0;
    printf("Enter a print the count of digits of a number : ");
    scanf("%d",&n);
    for(;n>0;)
    {
        c++;
        n/=10;
    }
    printf("%d",c);
}
