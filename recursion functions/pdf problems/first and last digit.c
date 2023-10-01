#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number to print first and last digit of a number : ");
    scanf("%d",&n);
    printf("First digit is %d and Second digit is %d",digit(n),n%10);
}

int digit(int n)
{
    static int r;
    if(n>0)
    {
        r=n%10;
        n=n/10;
        digit(n);
    }
    else
        return r;
}
