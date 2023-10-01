#include <stdio.h>

void main()
{
    float a,y,h,ac,he,acr,ya;

    printf("Enter your acres value : ");
    scanf("%f",&a);

    y = a*4840;
    printf("Conversion of Acre %f to yards is %f yd",a,y);
    printf("\n");

    h = a/2.471;
    printf("Conversion of Acre %f to hecter is %f hc",a,h);
    printf("\n");

    ac = y/4840;
    printf("Conversion of Yard %f to Acre is %f ac",y,ac);
    printf("\n");

    he = y/11960;
    printf("Conversion of yard %f to hector is %f hc",y,he);
    printf("\n");

    acr = he*2.471;
    printf("Conversion of hector %f to Acre is %f ac",he,acr);
    printf("\n");

    ya = he*11960;
    printf("Conversion of hector %f to Acre is %f yd",he,ya);
    printf("\n");


    float g,l,ga;
    printf("Enter your liter value : ");
    scanf("%f",&l);

    g = l/3.785;
    printf("Conversion of liter %f to gallon is %f gn",l,g);
    printf("\n");

    ga = g*3.785;
    printf("Conversion of gallon %f to liter is %f ltr",g,ga);
    printf("\n");
}
