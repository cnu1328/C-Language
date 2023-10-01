//6)	Write a C program to check whether a number is positive, negative or zero using switch case.

#include <stdio.h>

void main()
{
    int a;
    printf("Enter a number to check +ve or -ve or zero : ");
    scanf("%d",&a);

    switch(a>0)
    {
    case 1:
        printf("%d is a positive number",a);
        break;
    default:
        if (a==0)
            printf("%d is zero",a);
        else
            printf("%d is negative number",a);


    }
}
