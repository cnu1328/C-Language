#include <stdio.h>
#include <math.h>

void main()
{
    float a,b,c,r1,r2,img,d;
    printf("Enter co-efficent of x^2 , co-efficent of x and constant values : ");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("Roots are real and distinct.\nroot1 = %.0f and root2 = %.0f",r1,r2);
    }
    else
    {
        if(d==0)
        {
            r1=r2=-b/2*a;
            printf("Roots are real.\nroot1 = %.0f and root2 = %.0f",r1,r2);
        }
        else
        {
            r1=-b/2*a;
            img= sqrt(abs(d))/2*a;
            printf("Roots are imaginary.\n root1 = %.2f+i%.2f and root2 = %.2f-i%.2f",r1,img,r1,img);

        }
    }

}
