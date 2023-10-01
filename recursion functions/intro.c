#include <stdio.h>
//recursion functions are calls the function itself.

//example
int fact(int n);
int natural(int n);
int pr(int n);
void main()
{
    int n,r;
    printf("Enter a number to get its factorial : ");
    scanf("%d",&n);
    r = fact(n);
    printf("factorial of %d is %d",n,r);
    printf("\n");
    natural(n);
    printf("\n");
    pr(n);
}

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

//printing n numbers in reverse order

int natural(int n)
{
    if(n==1)
        printf("%d",1);
    else
    {
        printf("%d, ",n);
        natural(n-1);
    }
}
//printing n numbers in reverse order
int pr(int n)
{
    if(n==1)
        printf("%d, ",n);
    else
    {
        pr(n-1);
        printf("%d, ",n);
    }
}
