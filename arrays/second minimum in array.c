#include <stdio.h>

void main()
{
    int a[10],n,i,min1,min2;
    printf("Enter a number to enter elements : ");
    scanf("%d",&n);
    printf("Enter %d array values : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min1=a[0];
    min2=a[1];
    for(i=0;i<n;i++)
    {
        if(a[i]<min1)
        {
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2 && a[i]>min1)
            min2=a[i];
    }
    printf("First minimum is %d\nSecond minimum is %d",min1,min2);
}
