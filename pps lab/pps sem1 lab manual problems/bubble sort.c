#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,i,j,*a;
    printf("Enter a number to enter number of elements : ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Entered elements : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
    //bubble sort
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\nsorted array : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);


}
