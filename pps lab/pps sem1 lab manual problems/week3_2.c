//2.	Write a C program to find that the accepted no is Negative, Positive or Zero.

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number to check its sign : ");
    scanf("%d",&n);
    if(n>0)
        printf("%d is a positive number",n);
    else if(n==0)
        printf("%d is a zero",n);
    else
        printf("%d is a negative number",n);
}
