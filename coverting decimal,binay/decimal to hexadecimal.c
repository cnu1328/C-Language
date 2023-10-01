//55)	Write a C program to convert Decimal to Hexadecimal number system.
#include <stdio.h>
void main()
{
    int dec,i,rem,tem;
    char hexa[100];
    printf("Enter Decimal to convert Hexadecimal number system : ");
    scanf("%d",&dec);

    tem=dec;
    printf("Decimal number is %d is converted to Hexadecimal %d",tem);
    printf("%d",dec);
    i=0;
    while(dec>0){
        rem = dec%16;
        if(rem<10)
            hexa[i]=rem+48;
        else
            hexa[i]=rem+55;

        i++;
        dec = dec /16;


    }
    int j=0;
    for(j=i-1;j>=0;j--){
        printf("%c",hexa[j]);
    }

}
