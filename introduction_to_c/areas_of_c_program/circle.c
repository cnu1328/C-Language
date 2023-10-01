#include <stdio.h>

void main()
{
    float r,a;
    printf("Enter the radius of circle : ");
    scanf("%f",&r);

    if(r>=0)
    {
        a = 22.0/7*(r*r);
        printf("Area of circle is %f ",a);
    }
    else
        printf("Radius of circle should be positive");

    printf("\n");

    float ra,p;

    printf("Enter the radius of circle : ");
    scanf("%f",&ra);

    p = 2*(22.0/7)*ra;

    printf("Perimeter of the circle is %f",p);
}
