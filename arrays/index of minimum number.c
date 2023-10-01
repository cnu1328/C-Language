
#include <stdio.h>

void main()
{
    int n,i,index,min;
    printf("Enter a number to ask array values : ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
            index=i;
    }
    printf("Index of the minimum array value is %d",index);

}
