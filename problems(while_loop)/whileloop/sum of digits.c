//22)	Write a C program to calculate sum of digits of a number.

#include <stdio.h>

void main(){
    int n,s;
    printf("Enter your number : ");
    scanf("%d",&n);

    while(n>0)
    {
        int rem;
        rem = n%10;
        s = s+rem;
        n =n/10;
    }
    printf("Sum of the digits is %d",s);

}
