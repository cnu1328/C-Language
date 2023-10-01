#include<stdio.h>

void main()
{
    float r,h,sa;
    printf("Enter the value of radius of cylinder : ");
    scanf("%f",&r);
    printf("Enter the value of height of cylinder : ");
    scanf("%f",&h);
    if (r>0 && h>0)
    {
        sa = 2*22.0/7*r*h+(2*22.0/7*r*r);
        printf("Surface area of cylinder is %f",sa);

    }
    else
        printf("Enter the radius and height values only on positive");

    printf("\n");

    float ra,he,v;
    printf("Enter the value of the radius of cylinder : ");
    scanf("%f",&ra);
    printf("Enter the value of the height of cylinder : ");
    scanf("%f",&he);
    if (ra>0 && he>0)
    {
        v = 22.0/7*r*r*h;
        printf("The volume of the cylinder is %f",v);
    }
    else
        printf("please check the values, they should be positive");
}
