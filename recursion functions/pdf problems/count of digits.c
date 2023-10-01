#include <stdio.h>
int mul(int n);
void main()
{
    int n;
    printf("Enter number to print its number of digits : ");
    scanf("%d",&n);
    printf("Count of digits of a number %d",mul(n));
}
int mul(int n)
{
    static int i=0;
    if(n>0)
    {
        i++;
        mul(n/10);
    }
    else
        return i;
}
