//Write a C program to check whether a number is even or odd using switch case.
#include <stdio.h>

void main()
{
    int a;
    printf("Enter a number to check even or odd : ");
    scanf("%d",&a);

    switch(a%2==0)
    {
    case 1:
        printf("%d is a even number",a);
        break;

    default:
        printf("%d is odd number",a);
    }
}
