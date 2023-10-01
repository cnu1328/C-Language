//1.	Write a C program to find the sum of first 100 odd nos. and even nos.
#include <stdio.h>

void main()
{
    int sume=0,sumo=0,c=0,i;
    for(i=1;;i++)
    {
        if(i%2==0)
        {
            sume+=i;
            c++;
        }

        else
            sumo+=i;
        if(c==100)
            break;
    }
    printf("Sum of first 100 even numbers is %d",sume);
    printf("\nSum of first 100 odd numbers is %d",sumo);
}
