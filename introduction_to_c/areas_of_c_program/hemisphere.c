#include <stdio.h>

void main()
{
    float r,sa,v,d;
    printf("Enter the value of radius of hemisphere : ");
    scanf("%f",&r);
    if (r>0)
    {
        v = 2/3*22.0/7*r*r*r;
        sa = 3*22.0/7*r*r;
        d = 2*r;

        printf("Volume of the hemisphere is %f",v);
        printf("\n");
        printf("Surface Area of the hemisphere is %f",sa);
        printf("\n");
        printf("Diameter of the hemisphere is %f",d);
        printf("\n");

        printf("\n");
    }
    else
        printf("Enter all values as non-negative");
}
