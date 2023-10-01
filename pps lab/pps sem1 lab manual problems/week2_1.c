//1.	Write a C program to find the area of a circle using the formula: Area = PI * r*rr,

#include <stdio.h>

void main()
{
    int r,pi=22.0/7;
    float area;
    printf("Enter radius of the circle to find the area : ");
    scanf("%d",&r);
    if(r>0)
    {
        area = pi*r*r;
        printf("Area of the given circle is %.2f",area);
    }
    else if(r==0)
        printf(" radius with 1 is a point circle and it has no area");
    else
        printf("Radius should be non-negative number");
}
