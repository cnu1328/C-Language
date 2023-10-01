#include <stdio.h>

void main()
{
    float cm,m;
    printf("Enter your centimeter value : ");
    scanf("%f",&cm);
    m = cm/100;
    printf("Conversion of centimeter %f to meter is %f m",cm,m);

    printf("\n");

    float me,ce;
    printf("Enter your meter value : ");
    scanf("%f",&me);
    ce = me*100;
    printf("Conversion of meter %f to centimeter is %f cm",me,ce);
    printf("\n");

    float mi,mm,ft;
    printf("Enter your meter value : ");
    scanf("%f",&mi);

    mm = mi*1000;

    printf("Conversion of meter %f to millimeter is %f mm",mi,mm);
    printf("\n");

    ft = mi*3.281;
    printf("Conversion of meter %f to feet is %f ft",mi,ft);
    printf("\n");
    printf("\n");

    float ftt,in,mt,cn;
    printf("Enter your feet value : ");
    scanf("%f",&ftt);
    in = ftt*12;
    mt = ftt/3.28;
    cn = ftt/3.28*100;
    printf("Conversion of feet %f to inches is %f inches ",ftt,in);
    printf("\n");
    printf("Conversion of feet %f to meter is %f m",ftt,mt);
    printf("\n");
    printf("Conversion of feet %f to centimeter is %f cm",ftt,cn);
    printf("\n");








}
