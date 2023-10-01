//2.	Write a C program to find the area and volume of sphere.  Formulas are: Area =4*PI*R*R Volume = 4/3*PI*R*R*R.
#include <stdio.h>

void main()
{
    int r,pi=22.0/7;
    float area,vol;
    printf("Enter a radius of the sphere to find its area and volume : ");
    scanf("%d",&r);
    if(r>0)
    {
        area = 4*pi*r*r;
        vol = (4/3)*pi*r*r*r;
        printf("Area of the sphere %.2f and volume of sphere %.2f",area,vol);
    }
    else
        printf("Radius should be non-negative number");
}
