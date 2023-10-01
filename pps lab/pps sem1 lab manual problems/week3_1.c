//1.	Write a C program to find the maximum from given three nos.
#include <stdio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers to print maximum number : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("%d is greater than %d and %d",a,b,c);
        else
            printf("%d is greater than %d and %d",c,a,b);
    }
    else
    {
        if(b>c)
            printf("%d is greater than %d and %d",b,a,c);
        else
            printf("%d is greater than %d and %d",c,a,b);
    }
}
