//47)	Write a C program to convert Binary to Octal number system.

#include <stdio.h>

void main()
{
    int bin,rem,decimal=0,power=1,oct=0,position=1,temp;
    printf("Enter a binary number to convert it to octal : ");
    scanf("%d",&bin);
    temp = bin;
    while(bin>0){
        rem = bin%10;
        decimal = decimal+rem*power;
        power = power*2;
        bin /= 10;
    }
    printf("%d",decimal);
    while(decimal>0){
        rem = decimal%8;
        oct = oct+ (rem*position);
        position *= 10;
        decimal /=8;
    }
    printf("Converted octal number %d from binary number %d",oct,temp);
}
