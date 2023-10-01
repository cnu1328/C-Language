#include <stdio.h>

void main()
{
    float c,f,k,fe,ce,ke,ct;
    printf("Enter the degree of Celsius value : ");
    scanf("%f",&c);

    f = (c*9/5)+32;
    printf("Conversion of Celsius %f to Fahrenheit is %f F",c,f);
    printf("\n");
    k = c+273.15;
    printf("Conversion of Celsius %f to Kelvin is %f k",c,k);
    printf("\n");
    fe = (k-273.15)*9/5+32;
    printf("Conversion of kelvin %f to Fahrenheit is %f F",k,fe);
    printf("\n");

    ce = k-273.15;
    printf("...Conversion of kelvin %f to Celsius is %f C",k,ce);
    printf("\n");

    ke = (fe-32)*5/9+273.15;
    printf("Conversion of Fahrenheit  %f to Kelvin is %f K",fe,ke);
    printf("\n");

    ct = (fe-32)*5/9;
    printf("Conversion of Fahrenheit %f to Celsius is %f C",fe,ce);
    printf("\n");






}
