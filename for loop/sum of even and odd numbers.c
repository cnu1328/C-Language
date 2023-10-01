//15)	Write a C program to find sum of all even numbers between 1 to n.
//16)	Write a C program to find sum of all odd numbers between 1 to n.

#include <stdio.h>

void main()
{
    int n,i,sume=0,sumo=0;
    printf("Enter a number to print sum of all even numbers from 1 to : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0)
            sume = sume +i;
    }
    for(i=0;i<=n;i++){
        if(i%2!=0)
            sumo=sumo+i;
    }
    printf("Sum of all even numbers from 1 to %d is %d\n",n,sume);
    printf("Sum of all odd numbers from 1 to %d is %d",n,sumo);
}
