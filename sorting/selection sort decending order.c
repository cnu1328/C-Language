#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,*a,i,j,max,loc;
    printf("Enter a number to enter array values : ");
    scanf("%d",&n);
    printf("Enter your array values : ");
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered array values : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
    for(i=0;i<n;i++)
    {
        max=a[i];
        loc=i;
        for(j=i;j<n;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
                loc=j;
            }
        }
        int t;
        t=a[i];
        a[i]=a[loc];
        a[loc]=t;
    }
    printf("\nSorted order : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);

}
