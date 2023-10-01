//i.sum=1-x2/2! +x4/4!-x6/6!+x8/8!-x10/10!+……….,

#include <stdio.h>
#include <math.h>

void main()
{
    int n,i,j;
    float x,t,sum=0;
    printf("Enter nth term number and x value : ");
    scanf("%d%f",&n,&x);
    for(i=0;i<n;i++)
    {
        int fact=1;
        for(j=1;j<=2*i;j++)
        {
            fact= fact*j;
        }
        t = ((pow(-1,i))*(pow(x,2*i)))/fact;
        sum += t;
    }
    printf("%f",sum);
}
