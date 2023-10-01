#include <stdio.h>
#include <math.h>

void main()
{
    int n,i,j,fact;
    float x,sum=0;
    printf("Enter x value and nth term of the series : ");
    scanf("%f%d",&x,&n);
    for(i=0;i<n;i++)
    {
        fact =1;
        for(j=1;j<=i;j++)
            fact *=j;
        sum += pow(x,i)/fact;

    }
    printf("Sum of the series is : %.2f",sum);
}
