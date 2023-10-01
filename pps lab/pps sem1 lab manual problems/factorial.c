//i)	Calculating Factorial

#include <stdio.h>
int fact(int n);

void main()
{
    int n;
    printf("Enter a number to get its factorial : ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
         f=f*i;
    }
    return f;
}
