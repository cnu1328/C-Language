#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number to check it is a positive or negative or zero : ");
    scanf("%d",&n);
    positive(n);
}
int positive(int n)
{
    switch(n>0)
    {
    case 1:
        {
            printf("%d is a positive number",n);
            break;
        }
    case 0:
        {
            printf("%d is a negative number",n);
            break;
        }
    default:
        printf("%d is a zero");


    }
}
