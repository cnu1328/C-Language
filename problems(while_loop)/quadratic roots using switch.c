//Write a C program to find roots of a quadratic equation using switch case.

#include <stdio.h>
#include <math.h>

void main()
{
    int a,b,c;
    float d,s1,s2,img1,img2,imgr1,imgr2;
    printf("Enter your 'a' value : ");
    scanf("%d",&a);
    printf("Enter your 'b' value : ");
    scanf("%d",&b);
    printf("Enter your 'c' value : ");
    scanf("%d",&c);
    d = (b*b)-(4*a*c);

    switch(d>0)
    {
    case 1:
        s1 = (-b + (sqrt(d)))/2*a;
        s2 = (-b -(sqrt(d)))/2*a;
        printf("Roots of the quadratic equation is %f and %f",s1,s2);
        break;
    case 0:
        {
            switch(d<0)
            {
            case 1:
                s1=s2= (-b/(2*a));
                img1=img2= (d/(2*a));
                imgr1 = s1+img1;
                imgr2 = s2+img2;
                printf("Roots are imaginary. %.2f and %.2f are Roots of the given data",imgr1,imgr2);
                break;

            case 0:
                s1=s2= -b/(2*a);
                printf("Roots are equal. %.2f and %.2f are Roots of the given data",s1,s2);
                break;


            }
        }
    }
}
