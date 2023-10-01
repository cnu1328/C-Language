#include <stdio.h>

void main()
{
    int n,i,min;
    printf("Enter a number of array values you enter : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
            min = a[i];

    }
    printf("Minimum number in a given array %d",min);

}
