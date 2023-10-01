//27)	Write a C program to enter a number and print it in words.

#include <stdio.h>

void main()
{
    int n,n1,re=0;
    printf("Enter a number to convert it to words : ");
    scanf("%d",&n);
    n1=n;

    while(n1>0)
    {
        int rem;
        rem = n1%10;
        re = re*10+rem;
        n1 = n1/10;
    }

    while(n>0)
    {
        switch(re%10)
        {
        case 0:
        {
            printf("Zero ");
            break;
        }
        case 1:
        {
            printf("One ");
            break;
        }
        case 2:
        {
            printf("Two ");
            break;
        }
        case 3:
        {
            printf("Three ");
            break;
        }
        case 4:
        {
            printf("Four ");
            break;
        }
        case 5:
        {
            printf("Five ");
            break;
        }
        case 6:
        {
            printf("Six ");
            break;
        }
        case 7:
        {
            printf("Seven ");
            break;
        }
        case 8:
        {
            printf("Eight ");
            break;
        }
        case 9:
        {
            printf("Nine ");
            break;
        }


        }
        re = re/10;
        n =n/10;
    }





}
