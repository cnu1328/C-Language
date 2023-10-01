//iii.sum=1+x/1!+x^2/2!+x^3/3!..............,
#include <stdio.h>
#include <math.h>

void main()
{
    int n,fact,i,j;
    float x,t,sum=0;
    printf("Enter nth term and x value to print sum of series : ");
    scanf("%d%f",&n,&x);
    for(i=0;i<n;i++)
    {
        fact = 1;
        for(j=1;j<=i;j++)
            fact = fact*j;
        t = pow(x,i)/fact;
        sum += t;
    }
    printf("%.2f",sum);
}
