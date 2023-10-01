//49)	Write a C program to convert Binary to Hexadecimal number system.

#include <stdio.h>

void main()
{
    int bin,decimal,tem,rem,i=0,power=1;
    char hex[100];
    printf("Enter a binary number to convert Hexadecimal number : ");
    scanf("%d",&bin);
    tem=bin;
    while(tem>0){
        rem = tem%10;
        decimal = decimal + rem*power;
        power = power*2;
        tem /=10;
    }
    printf("%d\n",decimal);
    printf("Converted binary number %d to the hexadecimal number is ",bin);
    while(decimal >0){
        rem = decimal%16;
        if(rem<10){
            hex[i]=rem+48;
        }
        else
            hex[i]=rem+55;
        i++;
        decimal /=16;
    }
    int j=0;
    for(j=i-1;j>=0;j--){
        printf("%c",hex[j]);
    }
}
