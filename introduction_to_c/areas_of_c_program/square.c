#include <stdio.h>

void main()
{
    float l,a;
    printf("Enter the side of square : ");
    scanf("%f",&l);
    if (l>=0)
    {
        a = l*l;
        printf("Area of square with side %f is %f",l,a);
    }
    else
        printf("side of the square should be positive");

    float s,p;

    printf("Enter your side of the square : ");
    scanf("%f",&s);
    if (s>=0)
    {
        p = 4*s;
        printf("Perimeter of square of side %f is %f",s,p);
    }
    else
        printf("Side of the square should be positive");
}
