#include <stdio.h>

void main()
{
    int n,sum,rem,osum,esum,opsum,epsum;
    printf("Enter your number to sum the digits : ");
    scanf("%d",&n);
    sum = 0;
    while (n>0)
    {
        rem = n%10;
        sum = sum+rem;


        n  = n/10;

    }
    printf("Your sum of digits is : %d",sum);
}
