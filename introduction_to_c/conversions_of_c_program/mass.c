#include <stdio.h>

void main()
{
    float p,k,q,po;
    printf("Enter your pound value : ");
    scanf("%f",&p);

    k = p*0.454;
    q = k/100;
    po = q*220;

    printf("Conversion of pound %f to kilograms is %f kg",p,k);
    printf("\n");
    printf("Conversion of kilograms %f to quintal is %f qn",k,q);
    printf("\n");
    printf("Conversion of quintal %f to pound is %f pd",q,po);


}
