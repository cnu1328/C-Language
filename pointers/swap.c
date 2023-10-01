#include <stdio.h>

void swap(int *a,int *b);
void main()
{
    int a,b;
    printf("Enter two numbers to swap : ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("Swaped numbers are %d,%d",a,b);
}

void swap(int *a,int *b)
{
    int t;
    t= *a;
    *a=*b;
    *b=t;
}

