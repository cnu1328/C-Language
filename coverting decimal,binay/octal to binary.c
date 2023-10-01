//50)	Write a C program to convert Octal to Binary number system
#include <stdio.h>

void main()
{
    int oct,binary=0,decimal=0,tem,rem,power=1,position=1;
    printf("Enter a octal number to convert to binary number : ");
    scanf("%d",&oct);
    tem=oct;

    while(oct>0)
    {
        rem = oct%10;
        decimal = decimal+rem*power;
        power = power*8;
        oct = oct/10;
    }
    printf("%d",decimal);
    int rem1;

    while(decimal>0){
        rem1 = decimal%2;
        binary = binary+(rem1*position);
        decimal = decimal/2;
        position = position*10;


    }
    printf("Converted binary number %d from octal number %d",binary,tem);

}
