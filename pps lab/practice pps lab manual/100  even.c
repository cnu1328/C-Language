#include <stdio.h>

void main()
{
    int sume=0,sumo=0,i;
    for(i=0;i<=200;i++)
    {
        if(i%2==0)
            sume +=i;

        else
            sumo +=i;
    }
    printf("Sum of first 100 even numbers is %d",sume);
    printf("\nSum of first 100 odd numbers is %d",sumo);
}
