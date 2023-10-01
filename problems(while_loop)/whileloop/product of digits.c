//23)	Write a C program to calculate product of digits of a number.

#include <stdio.h>

void main(){
    int n,p=1;
    printf("Enter your number : ");
    scanf("%d",&n);

    while(n>0)
    {
        int rem;
        rem = n%10;
        p = p*rem;
        n = n/10;
    }
    printf("%d",p);


}
