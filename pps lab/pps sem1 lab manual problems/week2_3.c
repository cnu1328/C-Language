//3.	Write a C program to convert Celsius to Fahrenheit. Formula: C= (F-32)/1.8.

#include <stdio.h>

void main()
{
    float cel,far;
    printf("Enter Celsius temperature to convert it to Fahrenheit Temperature : ");
    scanf("%f",&cel);
    //formula for f=(c*9/5)+32
    far = (cel*9/5)+32;
    printf("%2.fC = %2.f F",cel,far);

}

