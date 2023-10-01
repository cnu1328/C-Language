//54)	Write a C program to convert Decimal to Octal number system.

#include <stdio.h>
void main()
{
    int decimal,oct=0,rem,tem,position=1;
    printf("Enter a number to convert decimal number to octal number : ");
    scanf("%d",&decimal);
    tem= decimal;
    while(tem>0)
    {
        rem = tem%8;
        oct = oct+rem*position;
        position = position*10;
        tem = tem/8;
    }
    printf("Converted octal number %d from decimal number is %d",oct,decimal);
}
