#include <stdio.h>
void main()
{
    int n,a[10],i,j,c,tc=0,sum=0;
    printf("Enter array values : ");
    scanf("%d",&n);
    printf("Enter %d array values : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Prime numbers in a array is : ");
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
                c+=1;

        }
        if(c==2)
        {
            tc+=1;
            sum+=a[i];
            printf("%d, ",a[i]);
        }
    }
    printf("\nTotal count of prime numbers in a array is %d",tc);
    printf("\nSummation of prime numbers in a array is %d",sum);



}
