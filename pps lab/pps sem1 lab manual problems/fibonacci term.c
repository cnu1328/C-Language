//ii)	Find value of a given Fibonacci term
#include <stdio.h>

void main()
{
    int n,i;
    printf("Enter a number to print its Fibonacci term :  ");
    scanf("%d",&n);
    printf("The Fibonacci term of the entered number : %d",fibo(n));
    printf("\nFibonacci series : ");
    for(i=1;i<=n;i++)
        printf("%d, ",fibo(i));
}

int fibo(int n)
{
    int a=0,b=1,i,c;
    for(i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}
