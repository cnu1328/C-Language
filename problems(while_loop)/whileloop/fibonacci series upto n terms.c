//44)	Write a C program to print Fibonacci series up to n terms.

#include <stdio.h>
void main()
{
    int n,a,b,c,i;
    printf("Enter a number to print Fibonacci series up to n terms : ");
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    printf("%d, %d, %d, ",a,b,c);
    while(i<=n)
    {
        a=b;
        b=c;
        c= a+b;
        printf("%d, ",c);
        i++;
    }
}
