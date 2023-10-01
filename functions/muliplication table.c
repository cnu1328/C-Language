#include <stdio.h>

void mul(int n)
{
    int i=1;
    for(i=1;i<=10;i++)
        printf("%d*%d=%d\n",n,i,n*i);
}
void main()
{
    int n;
    printf("Enter a number to print Multiplication Table : ");
    scanf("%d",&n);
    mul(n);
}
