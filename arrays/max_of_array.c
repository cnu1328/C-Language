#include <stdio.h>

void main()
{
    int n,i,max;
    printf("Enter number of values in a array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("Maximum number in a array is %d",max);
}
