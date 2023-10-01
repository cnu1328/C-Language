#include <stdio.h>

void main()
{
    int t,n,min,j,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int s[n];
        for(j=0;j<n;j++)
            scanf("%d",&s[j]);
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n-1;k++)
            {
                if(s[j]<s[k])
                {
                    int a;
                    a=s[j];
                    s[j]=s[k];
                    s[k]=a;
                }
            }
        }
        min = s[0]-s[1];
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n-1;k++)
            {
                if(min>s[j]-s[k])
                {
                    min=s[j]-s[k];
                }
            }
        }
        printf("%d",min);
    }


}
