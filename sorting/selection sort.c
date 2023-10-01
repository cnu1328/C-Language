/*selection sort is a process where all the arrays arranged in ascending order or sorted in ascending order
it looks like : a minimum value is found first and and stroing its location and swaping it with higher value
. It will continue until all conditions complete. Finally, sorted will get.*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,*a,i,j,min,loc;
    printf("Enter a number to enter array values : ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    printf("Enter array values : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nYour array values : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
    for(i=0;i<n-1;i++)
    {
        min = a[i];
        loc =i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                loc=j;
            }
        }
        int t;
        t=a[i];
        a[i]=a[loc];
        a[loc]=t;
    }
    printf("\nSorted array : ");
    for(i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    }
}
