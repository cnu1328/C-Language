#include <stdio.h>
int fact(int n);
void main()
{
    int n;
    printf("Enter a number to print its factorial : ");
    scanf("%d",&n);
    printf("factorial of a given number is : %d",fact(n));
}

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
