#include <stdio.h>

void main()
{
    float a,b,per;
    printf("Enter first and second number : ");
    scanf("%f%f",&a,&b);
    if(a<b)
    {
        per=a/b*100;
        printf("percentage is %.2f",per);

    }
    else
        printf("first value should less than second");


}
