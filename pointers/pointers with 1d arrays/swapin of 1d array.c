#include <stdio.h>

void main()
{
    int a[10],n,*p,i,j;
    printf("Enter a number : ");
    scanf("%d",&n);
    p=a;
    printf("Enter array values : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    j=n-1;
    while(i<j)
    {
        int t;
        t = a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
}
