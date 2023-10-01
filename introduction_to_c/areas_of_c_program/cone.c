#include <stdio.h>
#include<math.h>
void main()
{
    float r,h,sa;
    printf("Enter the radius of the cone : ");
    scanf("%f",&r);
    printf("Enter the height of the cone : ");
    scanf("%f",&h);

    if (r>0 && h>0)
    {
        sa = 22.0/7*r*(r+sqrt(h*h+r*r));
        printf("Surface area of the cone is %f",sa);
    }
    else
        printf("Please check enter values should be positive.");

    printf("\n");

    float ra,he,v;
    printf("Enter the value of radius of cone : ");
    scanf("%f",&ra);
    printf("Enter the value of the height of cone : ");
    scanf("%f",&he);
    if (ra>0 && he>0)
    {
        v = 22.0/7*ra*ra*(he/3);
        printf("Volume of the cone is %f",v);
    }
    else
        printf("Please check the entered values once again, it should be positive");

}
