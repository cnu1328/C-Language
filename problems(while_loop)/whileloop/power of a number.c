//29)	Write a C program to find power of a number using while loop.

#include <stdio.h>

void main()
{
    int x,n,i,power;
    printf("Enter your base and power value : ");
    scanf("%d%d",&x,&n);

    power = 1;
    i = 0;
    while(i<n)
    {
        power = power*x;
        i++;
    }
    printf("power of a number : %d",power);

}
