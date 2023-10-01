#include <stdio.h>
#include <stdlib.h>
void print(int *a, int n);
void read(int *a,int n);
void prime(int *p,int n);

int main()
{
    int *a,n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    read(a,n);
    print(a,n);
    prime(a,n);
}

void read(int *a,int n)
{
    printf("Enter values of the array : ");
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}

void print(int *a, int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
}

void prime(int *p,int n)
{
    int i,j;
    printf("\nPrime numbers in the given array : ");
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=1;j<=p[i];j++)
        {
            if(p[i]%j==0)
                c++;
        }
        if(c==2)
            printf("%d, ",p[i]);
    }
}
