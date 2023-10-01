//12)	Write a C program to print all even numbers between 1 to 100. - using while loop

#include <stdio.h>

void main()
{
    int i;

    i = 1;
    printf("All even numbers from 1 to 100");
    while(i<=100)
    {
        if (i%2==0)
        {
             printf("%d ",i);

        }
        i++;
    }
}
