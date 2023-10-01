#include <stdio.h>

int sum(int n);
int main()
{
    int n;
    printf("Enter a number to print sum of natural numbers : ");
    scanf("%d",&n);
    printf("Sum of natural numbers from 1 to %d is %d",n,sum(n));

}
//writing code for summation of numbers
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return n+sum(n-1);
}
