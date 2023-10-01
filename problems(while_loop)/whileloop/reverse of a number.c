//24)	Write a C program to enter a number and print its reverse.
#include <stdio.h>

void main()
{
    int n,reverse_n=0;
    printf("Enter a number to reverse : ");
    scanf("%d",&n);

    while(n>0)
    {
        int rem;
        rem = n%10;
        reverse_n = reverse_n*10+rem;
        n = n/10;
    }
    printf("%d",reverse_n);
}
