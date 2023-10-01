#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number to print fibonacci series : ");
    scanf("%d",&n);
    printf("%d",fibo(n));
}

void fibo(int n)
{
    int a=0,b=1,c,i;
    printf("%d, %d, ",a,b);
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        return c;
    }
}
