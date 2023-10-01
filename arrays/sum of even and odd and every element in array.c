#include <stdio.h>

void main()
{
    int a[10],i,n,tsum=0,esum=0,osum=0,ec=0,oc=0,tc=0;
    printf("Enter number of array values : ");
    scanf("%d",&n);
    printf("Enter %d array values : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            esum=esum+a[i];
            ec+=1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            osum=osum+a[i];
            oc+=1;
        }
    }
    for(i=0;i<n;i++)
    {
        tsum=tsum+a[i];
        tc+=1;
    }
    printf("Even summation of array values %d and even count values %d\n",esum,ec);
    printf("Odd summation of arrays values %d and odd count values %d\n",osum,oc);
    printf("Total summation of arrays values %d and total count values %d\n",tsum,tc);

}
