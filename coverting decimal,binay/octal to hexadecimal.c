//52)	Write a C program to convert Octal to Hexadecimal number system.
#include <stdio.h>

void main()
{
    int oct,dec=0,i,rem,tem,power=1;
    char hexa[100];
    printf("Enter octal number to convert to Hexadecimal number : ");
    scanf("%d",&oct);
    tem = oct;
    while(oct>0)
    {
        rem = oct%10;
        dec = dec+(rem*power);
        power = power*8;
        oct = oct/10;

    }
    printf("%d\n",dec);
    printf("octal number %d is converted to hexadecimal number ",tem);
    rem =0;
    i=0;
    while(dec>0){
        rem = dec%16;
        if(rem<10){
            hexa[i]= rem+48;

        }
        else
            hexa[i]=rem+55;
        i++;
        dec /=16;
    }
    int j=0;
    for(j=i-1;j>=0;j--){
        printf("%c",hexa[j]);
}
}
