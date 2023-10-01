#include <stdio.h>

void main()
{
    int n,i,max1,max2;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max1=max2=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]<max1)
            max2=a[i];
    }
    printf("Maximum of first number %d\n",max1);
    printf("Maximum of second number %d",max2);
}
