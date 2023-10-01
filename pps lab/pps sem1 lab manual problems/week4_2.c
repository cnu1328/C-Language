//2.	Write a C program to display first 100 prime nos.
#include <stdio.h>

void main()
{
    int c=0,co,i,j;
    printf("First 100 prime numbers : ");
    for(i=0;;i++)
    {
        co=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                co++;
        }
        if(co==2)
        {
            printf("%d, ",i);
            c++;
        }
        if(c==100)
            break;
    }
}
