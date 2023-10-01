
#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*int a[10];
    int *p;
    p=a;
    printf("%u",p);
    printf("\n%u",a);
    printf("\n%u",a+1);
    printf("\n%u",p+1);

    int *c[10];
    printf("\n%u",c);
    printf("\n%u",c+1);
    int **b;
    printf("\nhi");
    printf("\n%u",b);
    printf("\n%u",b+1);*/

    int **a,**b,**c,m,n,m1,n1,i,j;
    printf("Enter m and n values : ");
    scanf("%d%d",&m,&n);
    printf("Enter m1 and n1 values : ");
    scanf("%d%d",&m1,&n1);
    a=(int**)malloc(m*sizeof(int*));
    for(i=0;i<n;i++)
    {
        a[i]=(int*)malloc(n*sizeof(int));
    }
    b=(int**)malloc(m1*sizeof(int*));
    for(i=0;i<n1;i++)
    {
        b[i]=(int*)malloc(n1*sizeof(int));
    }
    c=(int**)malloc(m*sizeof(int*));
    for(i=0;i<n;i++)
        c[i]=(int*)malloc(n*sizeof(int));
    if(m==m1 && n==n1)
    {
        printf("Enter %dx%d values of first array values : ",m,n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        }

        printf("Enter %dx%d values of second array values : ",m1,n1);
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                scanf("%d",&b[i][j]);
        }

        printf("Addition resultant matrix is : ");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                c[i][j]=a[i][j]+b[i][j];
        }
        for(i=0;i<m1;i++)
        {
            printf("\n");
            for(j=0;j<n1;j++)
                printf("%d  ",c[i][j]);
        }
        printf("\nSubtraction of resultant matrix is : ");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                c[i][j]=a[i][j]-b[i][j];
        }
        printf("\n");
        //printing resultant matrix values
        for(i=0;i<m1;i++)
        {
            printf("\n");
            for(j=0;j<n1;j++)
                printf("%d ",c[i][j]);
        }
    }



}
