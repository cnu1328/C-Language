#include <stdio.h>
#include <stdlib.h>


void main()
{
    int *a,i,j,n;
    printf("Enter number of elements you enter : ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Entered elements  : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\nsorted elements : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);

}
