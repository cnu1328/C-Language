#include <stdio.h>
#include <math.h>
//i.sum=1-x2/2! +x4/4!-x6/6!+x8/8!-x10/10!+……….,

/*void main()
{
    float x,sum=0;
    int fact,i,j,n;
    printf("Enter a x value and nth term : ");
    scanf("%f%d",&x,&n);
    for(i=0;i<n;i++)
    {
        fact=1;
        for(j=1;j<=2*i;j++)
            fact=fact*j;
        sum=sum+(pow(-1,i)*pow(x,2*i))/fact;
    }
    printf("Sum of the first series is : %.2f",sum);
}*/

//ii.sum=x-x3/3!+x5/5!.........................,
/*void main()
{
    float x,sum=0;
    int fact,i,j,n;
    printf("Enter a x value and nth term : ");
    scanf("%f%d",&x,&n);
    for(i=0;i<n;i++)
    {
        fact=1;
        for(j=1;j<=2*i+1;j++)
            fact=fact*j;
        sum+=pow(-1,i)*pow(x,2*i+1)/fact;
    }
    printf("Sum of the series is : %.2f",sum);
}*/

//iii.sum=1+x/1!+x^2/2!+x^3/3!..............,

void main()
{
    float x,sum=0;
    int n,i,j,fact;
    printf("Enter x and nth term : ");
    scanf("%f%d",&x,&n);
    for(i=0;i<n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
            fact*=j;
        sum+=pow(x,i)/fact;

    }
    printf("Sum of the series is : %.2f",sum);
}
