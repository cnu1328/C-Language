#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,*a,i,j;
    printf("Enter a number to enter an array values : ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    printf("Enter array values : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Entered array values : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j>0;j--)
        {
            if(a[j]>a[j-1])
            {
                int t;
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
    }
    printf("\nSorted array : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
}
