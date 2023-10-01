//ii.sum=x-x3/3!+x5/5!.........................,
#include <stdio.h>
#include <math.h>
void main()
{
    int n,i,j,fact;
    float x,sum=0,t;
    printf("Enter nth term and x vlaue to print sum of the series : ");
    scanf("%d%f",&n,&x);
    for(i=0;i<n;i++)
    {
        fact = 1;
        for(j=1;j<=2*i+1;j++)
            fact = fact*j;
        t = (pow(-1,i)*pow(x,2*i+1))/fact;
        sum += t;

    }
    printf("%f",sum);
}
