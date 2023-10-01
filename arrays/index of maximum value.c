#include <stdio.h>

void main()
{
    int a[10],i,n,max,index;
    printf("Enter a number to ask array values : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            index=i;
            max = a[i];
        }


    }
    printf("Index of maximum number is %d %d",index,max);
}
