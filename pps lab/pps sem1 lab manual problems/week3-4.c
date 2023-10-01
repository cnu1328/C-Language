//4.	Write a C program that prints the given three integers in ascending order using if – else.

#include <stdio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scan0 f("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        if(b<c)
            printf("Ascending order is %d,%d,%d ",a,b,c);
        else
            printf("Ascending order is %d,%d,%d ",a,c,b);
    }

    else if(b<a && b<c)
    {
        if(a<c)
            printf("Ascending order is %d,%d,%d ",b,a,c);
        else
            printf("Ascending order is %d,%d,%d ",b,c,a);
    }
    else
    {
        if(a<b)
            printf("Ascending order is %d,%d,%d ",c,a,b);
        else
            printf("Ascending order is %d,%d,%d ",c,b,a);
    }
}
