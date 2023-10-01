//12)	Write a C program to print all even numbers between 1 to 100. - using while loop
//13)	Write a C program to print all odd number between 1 to 100.

#include <stdio.h>

void main()
{
    int n=100,i;
    printf("All even numbers from 1 to 100 are : ");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            printf("%d, ",i);
    }
    printf("\n");
    printf("All odd numbers from 1 to 100 are : ");
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
            printf("%d, ",i);
    }
}
