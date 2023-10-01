#include <stdio.h>
int fact(int n)
{
    int i,fac=1;
    for(i=1;i<=n;i++)
        fac=fac*i;
    return fac;
}
void main()
{
    int n;
    printf("Enter a number to get its factorial : ");
    scanf("%d",&n);
    printf("Factorial of a given number : %d",fact(n));
}

