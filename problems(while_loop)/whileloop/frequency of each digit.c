//26)	Write a C program to find frequency of each digit in a given integer.

//frequency is nothing but how many times a digit is appeared in number

#include <stdio.h>


void main()
{
    int n,num,a[10],i;
    printf("Enter your number : ");
    scanf("%d",&n);
    num=n;
    for(i=0;i<10;i++)
    {
        a[i]=0;
    }

    while(n!=0)
    {
        int rem;
        rem = n%10;
        a[rem]++;
        n=n/10;

    }
    printf("All frequencies of a number is %d\n",num);
    i=0;
    while(i<10)
    {
        if(a[i]!=0)
            printf("Frequency of the number %d is %d\n",i,a[i]);
        i++;
    }
}
