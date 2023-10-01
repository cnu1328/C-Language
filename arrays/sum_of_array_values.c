#include <stdio.h>

void main()
{
    int n,i,s=0;
    printf("Enter the number of values of array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        s=s+a[i];
    printf("Sum of all values in a array is %d",s);

}
