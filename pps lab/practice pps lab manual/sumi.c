#include <stdio.h>
#include <math.h>

void main()
{
    float x,sum=0;
    int n,i,j,fact;
    printf("Enter x and nth term values : ");
    scanf("%f%d",&x,&n);
    for(i=0;i<n;i++)
    {

        fact =1;
        for(j=1;j<=2*i;j++)
            fact=fact*j;
        sum += pow(-1,i)*(pow(x,2*i))/fact;

    }
    printf("sum of the series is %.2f",sum);

}
