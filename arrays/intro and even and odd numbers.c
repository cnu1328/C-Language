#include <stdio.h>
void main()
{
    int n,a[10],i;
    printf("Enter array values : ");
    scanf("%d",&n);
    printf("Enter %d array values : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
    printf("\nAll even array values : ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            printf("%d, ",a[i]);
    }
    printf("\nAll odd array values : ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
            printf("%d, ",a[i]);
    }

}
