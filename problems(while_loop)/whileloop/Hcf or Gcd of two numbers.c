//32)	Write a C program to find HCF (GCD) of two numbers.

#include <stdio.h>

void main()
{
    int a,b,i,min,hcf=1;
    printf("Enter two numbers to find HCF or GCD : ");
    scanf("%d%d",&a,&b);

    i = 1;
    min = (a<b)?a:b;
    while(i<=min)
    {
        if(a%i==0 && b%i==0)
            hcf = i;
        i++;
    }
    printf("HCF or GCD of %d and %d numbers is %d\n",a,b,hcf);









}
