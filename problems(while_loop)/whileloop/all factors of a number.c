//30)	Write a C program to find all factors of a number

#include <stdio.h>

void main()
{
    int n,i;
    printf("Enter a number to find all factors : ");
    scanf("%d",&n);

    i = 1;
    printf("The factors of your number is : ");
    while(i<=n)
    {
        if (n%i==0)
        {
            printf("%d,",i);
        }
        i++;
    }

}
