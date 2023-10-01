#include <stdio.h>

void main()
{
    int a[10],n,i;
    printf("Enter array values : ");
    scanf("%d",&n);
    printf("Enter %d array values : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("All even index values : ");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            printf("%d, ",a[i]);
    }
    printf("\nAll odd index values : ");
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
            printf("%d, ",a[i]);
    }

}
