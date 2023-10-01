#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number to get its Fibonacci term : ");
    scanf("%d",&n);
    printf("Fibonacci term of the given term is %d",fibo(n));
}
int fibo(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else if(n==3)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
