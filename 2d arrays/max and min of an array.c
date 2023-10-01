#include <stdio.h>

void main()
{
    int a[10][10],m,n,i,j,max,min;
    printf("Enter rows and columns of an array : ");
    scanf("%d%d",&m,&n);
    printf("Enter %dx%d values in a array : ",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    max=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
                max = a[i][j];
        }
    }
    printf("Maximum value in a array is %d\n",max);
    min=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]<min)
                min = a[i][j];
        }
    }
    printf("Maximum value in a array is %d\n",min);
}
