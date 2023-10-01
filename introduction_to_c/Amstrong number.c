#include <stdio.h>

void main()
{
    int n,sum,temp,rem;
    printf("Enter a number to check Amstrong : ");
    scanf("%d",&n);
    temp = n;
    sum = 0;
    while(n>0)
    {
        rem = n%10;
        sum = sum + rem*rem*rem;
        n = n/10;


    }
    if (temp==sum)
        printf("Entered number is Amstrong");
    else
        printf("Entered number is not a Amstrong");

}
