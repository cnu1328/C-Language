#include <stdio.h>

void main()
{
    int a[10][10],m,n,i,j,tc=0,sum=0,c,k;
    printf("Enter rows and columns of an array : ");
    scanf("%d%d",&m,&n);
    printf("Enter %dx%d values in an array : ",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("All prime numbers in an array : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c=0;
            for(k=1;k<=a[i][j];k++)
            {
                if(a[i][j]%k==0)
                    c+=1;

            }
            if(c==2)
            {
                printf("%d, ",a[i][j]);
                tc+=1;
                sum+=a[i][j];
            }
        }

    }
    printf("\nTotal count of prime numbers is %d",tc);
    printf("\nSum of prime numbers numbers is %d",sum);
}
