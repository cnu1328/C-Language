//48)	Write a C program to convert Binary to Decimal number system.

#include <stdio.h>

void main(){
    int bin,rem,decimal=0,power=1,temp;
    printf("Enter binary number to convert to Decimal number : ");
    scanf("%d",&bin);
    temp = bin;

    while(bin>0){
        rem = bin%10;
        decimal = decimal + rem*power;
        power = power*2;
        bin /= 10;
    }
    printf("Converted decimal number is %d of binary value %d",decimal,temp);

}
