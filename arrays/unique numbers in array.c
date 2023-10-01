#include <stdio.h>
void main()
{
    int n,i,unique,j,c;
    printf("Enter a number to ask array values : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Unique values in the array is/are : ");
    for(i=0;i<n;i++)
    {
        c=0;
        if(a[i]!=-999)
        {
            for(j=1;j<i;j++)
            {
                if(a[i]==a[j])
                    a[j]==-999;
                    c++;
            }
        }
        if(c==0)
            printf("%d is unique",a[i]);

    }
}
