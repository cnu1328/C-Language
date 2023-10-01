#include <stdio.h>

void main()
{
    float r,v;
    printf("Enter radius of the sphere : ");
    scanf("%f",&r);
    if (r>0)
    {
        v = 4/3*22.0/7*r*r*r;
        printf("Volume of the Sphere is %f",v);

    }
    else
        printf("Please Enter Positive numbers.");
    printf("\n");


    float d,ra,sa;
    printf("Enter the radius of sphere : ");
    scanf("%f",&ra);

    sa = 4*22.0/7*ra*ra;
    printf("Surface area of sphere is %f",sa);
    printf("\n");
    printf("\n");
    d = 2*ra;
    printf("Diameter of the Sphere is %f",d);
    printf("\n");



}
