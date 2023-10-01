#include <stdio.h>
void main()
{
    float area,volume,r;
    printf("Enter area of the sphere : ");
    scanf("%f",&r);
    area = 4*22.0/7*r*r;
    volume = (4.0/3)*(22.0/7)*r*r*r;
    printf("Area and Volume of the sphere are %.2f and %.2f",area,volume);
}
