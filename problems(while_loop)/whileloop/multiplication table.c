//17)	Write a C program to print multiplication table of any number.

#include <stdio.h>

void main()
{
    int i,n;

    i=1;
    n=5;
    printf("multiplication table of %d is : ",n);
    printf("\n");

    while(i<=10)
    {
        printf("%d * %d = %d",n,i,n*i);
        printf("\n");
        i++;
    }


}
