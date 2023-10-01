/*Quick sort is nothing but, first we select a pivot and we give aprropiate conditions to arrange
all other elements in such a order that all greater values right side pivot and all lesser values
left side of pivot and arranging the pivot in where it comes. After all, agian quick sorting same process
right side part and left side part of the pivot until all the array elements sorted. finally we get sorted
array.*/

#include <stdio.h>
#include <stdlib.h>
void quick(int *p,int st,int end);
void main()
{
    int n,*a,i,j;
    printf("Enter a number to enter number of array values : ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    printf("Enter array values : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Entered array values :");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
    quick(a,0,n-1);
    printf("\nEntered sorted values :");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
}

void quick(int *p,int st,int end)
{

    if(st<end)
    {
        int i,j,pivot,t;
        pivot = p[st];
        i=st;
        j=end;
        while(i<j)
        {
            while(p[i]<=pivot && i<end)
                i++;
            while(p[j]>pivot)
                j--;
            if(i<j)
            {
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
        t=p[st];
        p[st]=p[j];
        p[j]=t;
        quick(p,st,j-1);
        quick(p,j+1,end);
    }
}
