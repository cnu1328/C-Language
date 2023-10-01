//Write a C program to find maximum between two numbers using switch case.
#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter your two numbers : ");
    scanf("%d%d",&a,&b);

    switch(a>b)
    {
    case 1:
        printf("%d is greater than %d",a,b);
        printf("\n");
        printf("%d is smaller than %d",b,a);
        break;


    default:
        printf("%d is greater than %d",b,a);
        printf("\n");
        printf("%d is smaller than %d",a,b);

    }

}
