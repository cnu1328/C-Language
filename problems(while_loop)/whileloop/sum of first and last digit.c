//20)	Write a C program to find sum of first and last digit of a number.

#include <stdio.h>

void main()
{
    int n,rem1,s=0,rem;
    printf("Enter your number : ");
    scanf("%d",&n);
    rem = n%10;
    while(n>0){
        rem1=n%10;
        n=n/10;
    }
    s = rem+rem1;
    printf("Sum of first and last digit of number is %d",s);
}
