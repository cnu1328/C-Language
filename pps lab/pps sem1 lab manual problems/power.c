#include <stdio.h>
#include <math.h>

void main()
{
    int n,x,i,t;
    printf("Enter base value and exponential value : ");
    scanf("%d%d",&x,&n);
    t=pow(x,n);
    printf("%d",t);
}
