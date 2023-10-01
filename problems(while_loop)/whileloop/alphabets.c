//11)	Write a C program to print all alphabets from a to z. - using while loop

#include <stdio.h>

void main()
{
    char c='a',ch = 'A';
    int i;

    i = 1;
    printf("Small alphabets : ");
    while(i<=26)
    {
        printf("%c ",c);
        i=i+1;
        c=c+1;
    }
    printf("\n");
    printf("Capital Alphabets : ");
    while(i<52)
    {
        printf("%c ",ch);
        ch = ch+1;
        i =i+1;

    }


}
