#include <stdio.h>
int count(int n);
void main()
{
    int n;
    printf("Enter a number to print its count : ");
    scanf("%d",&n);
    printf("Number of digits in a number(%d) is %d",n,count(n));
}

int count(int n)
{
    int i=0;
    while(n>0)
    {
        n=n/10;
        i++;
    }
    return i;
}
