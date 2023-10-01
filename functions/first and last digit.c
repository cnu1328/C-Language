/*
18)	Write a C program to count number of digits in a number.
19)	Write a C program to find first and last digit of a number.
20)	Write a C program to find sum of first and last digit of a number.
21)	Write a C program to swap first and last digits of a number.
22)	Write a C program to calculate sum of digits of a number.
23)	Write a C program to calculate product of digits of a number.

*/
#include <stdio.h>
int pro(int n);
int digit(int n);
int sum(int n);
int sumd(int n);
int prod(int n);
int swap(int n);
void main()
{
    int n;
    printf("Enter a number to print First and last digit of number : ");
    scanf("%d",&n);
    digit(n);
    printf("\nSum of first and last digit of a number is %d",sum(n));
    printf("\nProduct of first and last digit of a number is %d",pro(n));
    printf("\nsum of all digits of a number is %d",sumd(n));
    printf("\nProduct of all digits of a number is %d",prod(n));
    printf("\nAfter Swap first and last digit of a number is %d",swap(n));
}
int swap(int n)
{
    int r,r1,n1,rev=0;
    n1=n%10;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    printf("%d,,,,",r);
    int num=n1;
    while(rev>0)
    {
        r1=rev%10;
        if(n1!=r1 && r!=r1)
        {
            num=num*10+r1;
        }

        rev/=10;
    }
    num=num*10+r;
    return n1;


}
int digit(int n)
{
    int r,r1;
    r=n%10;
    while(n>0)
    {
        r1=n%10;
        n=n/10;
    }
    printf("First digit is %d and last digit is %d",r1,r);
    return r+r1;


}

int sum(int n)
{
    int r,r1;
    r=n%10;
    while(n>0)
    {
        r1=n%10;
        n=n/10;
    }
    return r+r1;


}

int pro(int n)
{
    int r,r1;
    r=n%10;
    while(n>0)
    {
        r1=n%10;
        n=n/10;
    }
    return r*r1;

}
int prod(int n)
{
    int r,p=1;
    while(n>0)
    {
        r=n%10;
        p*=r;
        n=n/10;
    }
    return p;
}

int sumd(int n)
{
    int r,sum=0;
    while(n>0)
    {
        r=n%10;
        sum +=r;
        n=n/10;
    }
    return sum;
}
