#include <stdio.h>

void main()
{
    float l,b,a;
    printf("Enter length of the rectangle : ");
    scanf("%f",&l);
    printf("Enter breadth of the rectangle : ");
    scanf("%f",&b);

    a = l*b;

    printf("The area of rectangle of length %f and breadth %f is %f",l,b,a);

    printf("\n");


    float le,br,p;
    printf("Enter length of the rectangle : ");
    scanf("%f",&le);
    printf("Enter breadth of the rectangle : ");
    scanf("%f",&br);

    p = 2*(le+br);

    printf("perimeter of rectangle of length %f and breadth %f is %f",le,br,p);


}


