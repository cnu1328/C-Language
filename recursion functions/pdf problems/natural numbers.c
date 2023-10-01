#include <stdio.h>
int reverse(int n);
int natural(int n);
void main()
{
    int n;
    printf("Enter a number to print values up to n : ");
    scanf("%d",&n);
    reverse(n);
    printf("\n");
    natural(n);
}

int reverse(int n)
{
    if(n==1)
        printf("%d",n);
    else
    {
        printf("%d, ",n);
        reverse(n-1);
    }

}

int natural(int n)
{
    if(n>=1)
    {
        natural(n-1);
        printf("%d, ",n);
    }
}
