#include <stdio.h>
#include <math.h>
void roots(float a,float b,float c);
int main()
{
    float a,b,c;
    printf("Enter the values of a,b and c values of ax^2+bx+c : ");
    scanf("%f%f%f",&a,&b,&c);
    roots(a,b,c);

}
void roots(float a,float b,float c)
{
    int d;
    d = b*b-4*a*c;
    switch(d>0)
    {
    case 1:
        {
            float root1,root2;
            root1= (-b+(sqrt(d)))/2*a;
            root2= (-b-(sqrt(d)))/2*a;
            printf("Roots are distinct : %d , %d ",root1,root2);
            break;

        }
    case 0:
        switch(d<0)
        {
        case 1:
            {
                float r,img;
                r= -d/2*a;
                img = sqrt(abs(d))/2*a;
                printf("Roots are imaginary : %f+i%f and %f-i%f",r,img,r,img);
                break;
            }
        case 0:
            {
                float root;
                root =-b/2*a;
                printf("Roots are equal : %d , %d",root,root);
            }
        }



    }
}
