#include <stdio.h>

void main()
{
    float cel,fah;
    printf("Enter Celsius heat : ");
    scanf("%f",&cel);
    fah = (cel*9/5)+32;
    printf("%.0f C = %.0f F",cel,fah);
}
