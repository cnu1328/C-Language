//53)	Write a C program to convert Decimal to Binary number system.

#include <stdio.h>

void main(){
    int n,n1,position=1,binary = 0;
    printf("Enter a number to convert Decimal to Binary : ");
    scanf("%d",&n);
    n1 =n;
    while(n1>0){
        int rem;
        rem = n1%2;
        binary =binary+(rem*position);
        n1 = n1/2;
        position *= 10;


    }
    printf("Binary number is  %d",binary);

}
