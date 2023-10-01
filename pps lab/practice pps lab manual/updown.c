#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    if(a<b)
        printf("UP");
    else if(b<a)
        printf("DOWN");
    else if(a==b)
        printf("EQUAL");
    else
        printf("ERROR");

}
