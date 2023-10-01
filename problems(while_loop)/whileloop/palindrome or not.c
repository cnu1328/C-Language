//25)	Write a C program to check whether a number is palindrome or not.

#include <stdio.h>

void main()
{
    int n,re,n1;
    printf("Enter your number : ");
    scanf("%d",&n);
    n1 =n;

    while(n>0)
    {
        int rem;
        rem = n%10;
        re = re*10+rem;
        n=n/10;
    }
    if (re==n1)
        printf("Entered number is a palindrome");
    else
        printf("Entered number is not a palindrome");
}
