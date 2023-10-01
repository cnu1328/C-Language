#include <stdio.h>
#include <stdlib.h>
//3.Write a program using pointers to compute the sum of all elements  in an array

int sum(int *p,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=*(p+i);
    }
    return sum;
}
void main()
{
    int n,*a,i;
    printf("Enter a number to enter number of elements : ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter array values : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEntered array elements : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
    printf("\nsum of all elements in a array is %d",sum(a,n));
}
