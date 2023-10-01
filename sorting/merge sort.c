/*merge sort is nothing but : spliting an array halfly and and halfly and halfly until single element comes.
Here itself single element itself is a sorted. Now merging the elements in sorted order*/

#include <stdio.h>
#include <stdlib.h>
void split(int *p,int st,int end);
void merge(int *p,int st,int mid, int end);
void main()
{
    int n,i,*a;
    printf("Enter a number to enter number of array values : ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    printf("Enter array values : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Entered array values are : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
    split(a,0,n-1);
    printf("\nSorted order : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
}

void split(int *p,int st,int end)
{
    int mid;
    if(st<end)
    {
        mid=(st+end)/2;
        split(p,st,mid);
        split(p,mid+1,end);
        merge(p,st,mid,end);
    }
}

void merge(int *p,int st,int mid, int end)
{
    int b[20],k,j,i;
    i=st;
    k=st;
    j=mid+1;
    while(i<=mid && j<=end)
    {
        if(p[i]<=p[j])
        {
            b[k++]=p[i++];

        }
        else
        {
            b[k++]=p[j++];
        }
    }
    if(i>mid)
    {
        while(j<=end)
            b[k++]=p[j++];
    }
    else
    {
        while(i<=mid)
            b[k++]=p[i++];
    }
    for(i=st;i<=end;i++)
        p[i]=b[i];
}
