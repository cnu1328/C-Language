//4.	Write a C program to display Fibonacci series
#include <stdio.h>

void main()
{
    int n,a=0,b=1,c;
    printf("Enter a nth term for Fibonacci series : ");
    scanf("%d",&n);
    printf("%d, %d, ",a,b);
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d, ",c);

    }
}
