#include <stdio.h>

void main()
{
    int a[10][10],m,n,i,j,ec=0,oc=0;
    printf("Enter number of rows and columns : ");
    scanf("%d%d",&m,&n);
    printf("Enter %dx%d values in a array : ",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("All even values in an array : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]%2==0)
            {
                printf("%d, ",a[i][j]);
                ec+=1;
            }

        }
    }
    printf("\nCount of even numbers is %d\n",ec);
    printf("All even values in an array : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]%2!=0)
            {
                printf("%d, ",a[i][j]);
                oc+=1;
            }

        }
    }
    printf("\nCount of odd numbers is %d\n",oc);
}
