#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number to check even or odd");
    scanf("%d",&n);
    even(n);
    odd(n);
}
int even(int n)
{
    switch(n%2==0)
    {
    case 1:
        printf("%d is an even number",n);
        break;
    default:
        printf("%d is an odd number",n);
    }
}
int odd(int n)
{
    if(n%2==0)
        printf("%d is an even number",n);
    else
        printf("%d is an odd number",n);
}
