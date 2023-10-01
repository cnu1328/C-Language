#include <stdio.h>
#include <math.h>


void main()
{
    float a,b,c,r1,r2,d;
    printf("Enter co-ordinates of the quadratic equation in the order a,b,c : ");
    scanf("%f%f%f",&a,&b,&c);
    d = b*b-4*a*c;
    if(d>0)
    {
        r1 = (-b+sqrt(d))/2*a;
        r2 = (-b-sqrt(d))/2*a;
        printf("Roots are real and distinct. root1 = %f and root2 = %f",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=-b/2*a;
        printf("Roots are real and equal. root1 = %f and root2=%f",r1,r2);

    }
    else
    {
        float real,img;
        real = -b/2*a;
        img = (sqrt(abs(d)))/(2*a);
        printf("Roots are imaginary. root1 = %f+i%f and root2 = %f-i%f",real,img,real,img);

    }

}
