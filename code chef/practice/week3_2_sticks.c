#include <stdio.h>

void main()
{
    int t,n,i,j,done=1,area=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],k,flag=1,c[1001];
        for(j=0;j<n;j++)
            c[j]=0;
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        for(j=0;j<n;j++)
        {
            for(k=0;k<1001;k++)
            {
                if(a[j]==k)
                    c[j]++;

            }
        }
        for(j=n-1;j>=0;j--)
        {
            if(flag==1)
            {
                if(c[j]>=2)
                {
                    area *= j;
                    flag = 0;
                    c[j]-=2;
                }
            }
            if(flag==0){
                if(c[j]>=2)
                {
                    area*=j;
                    done = 0;
                    break;

                }
            }


        }
    }
    if(done==0)
        printf("%d",area);
    else
        printf("%d",-1);
}
