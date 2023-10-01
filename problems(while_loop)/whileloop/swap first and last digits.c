//21)	Write a C program to swap first and last digits of a number.

#include <stdio.h>

void main()
{
    int n,n1,n2,n3,r=1;
    printf("Enter your number : ");
    scanf("%d",&n);
    n1 = n%10;
    while(n>0){
        n2 = n%10;
        r = r*10+n2;
        n =n/10;
    }
    int num=n1;
    while(r>0){
        int rem;
        rem = r%10;
        if(n1!= rem && n2!= rem){
            num = num*10 +rem;
        }
        r /=10;

    }
    num = num*10+n2;
    printf("After swapping of first and last digit is %d",num);







}
