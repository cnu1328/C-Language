#include <stdio.h>

void main()
{
    int a[10],*p,n,i,sum=0;
    printf("Enter n number : ");
    scanf("%d",&n);
    p=a;
    printf("Enter array values : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
    for(i=0;i<n;i++)
        sum+= a[i];
    printf("\nSum of the array values is %d",sum);
    i=0;
    int j=n-1;
    while(i<j)
    {
        int t;
        t = p[i];
        p[i]=p[j];
        p[j]=t;
        i++;
        j--;
    }
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
}
