#include <stdio.h>
int fibo(int n);
int main()
{
    int n,r,i;
    printf("Enter a number to print sum of fiboncci series of nth term : ");
    scanf("%d",&n);
    r = fibo(n);
    printf("%d",r);
    printf("\nfibonacci series : ");
    for(i=1;i<=n;i++)
    {
        printf("%d",fibo(i));
    }
}

//writing code for sum of fibonacci sereis
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
