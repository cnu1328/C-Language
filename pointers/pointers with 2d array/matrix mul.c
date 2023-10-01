#include <stdio.h>
#include <stdlib.h>
void read(int **a, int m1, int n1);
void print(int **a, int m1, int n1);
void mul(int **a,int **b,int **c,int m1,int n2,int n1);
void main()
{
    int **a,m1,n1,i,j,**b,**c,n2,m2;
    printf("Enter rows and columns of first matrix : ");
    scanf("%d%d",&m1,&n1);
    printf("Enter rows and columns of the second matrix : ");
    scanf("%d%d",&m2,&n2);
    a=(int**)malloc(m1*sizeof(int*));
    for(i=0;i<n1;i++)
        a[i]=(int*)malloc(n1*sizeof(int));
    b=(int**)malloc(m2*sizeof(int*));
    for(i=0;i<n2;i++)
        b[i]=(int*)malloc(n1*sizeof(int));
    c=(int**)malloc(m1*sizeof(int*));
    for(i=0;i<n2;i++)
        c[i]=(int*)malloc(n1*sizeof(int));

    if(n1==m2)
    {
        printf("Enter First matrix values : ");
        read(a,m1,n1);
        printf("Enter second matrix values : ");
        read(b,m2,n2);
        printf("First matrix values : ");
        print(a,m1,n1);
        printf("\nSecond matrix value : ");
        print(b,m2,n2);
        mul(a,b,c,m1,n2,n1);
    }
    else
        printf("Matrix multiplication is not applicable");

}

void read(int **a, int m1, int n1)
{
    int i,j;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
            scanf("%d",&a[i][j]);
    }
}

void print(int **a, int m1, int n1)
{
    int i,j;
    for(i=0;i<m1;i++)
    {
        printf("\n");
        for(j=0;j<n1;j++)
            printf("%d   ",a[i][j]);
    }
}

void mul(int **a,int **b,int **c,int m1,int n2,int n1)
{
    int i,j,k;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            c[i][j]=0;
            for(k=0;k<n1;k++)
                *(*(c+i)+j)  += *(*(a+i)+k)**(*(b+k)+j);
        }
    }
    printf("\nResultant matrix Multiplication is : ");
    print(c,m1,n2);
}


