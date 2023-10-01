//51)	Write a C program to convert Octal to Decimal number system.

#include <stdio.h>

void main()
{
    int oct,dec=0,i,tem,rem,power=1;
    printf("Enter a octal to convert to convert decimal number : ");
    scanf("%d",&oct);
    tem = oct;

    while(oct>0){
        rem = oct%10;
        dec = dec+(rem*power);
        power = power*8;
        oct /=10;
    }
    printf("Converted decimal number %d from octal number %d",dec,tem);
}
