#include <stdio.h>

int main()
{
    int a[10][10],m,n;
    printf("Enter m and n values : ");
    scanf("%d%d",&m,&n);
    read(a,m,n);
    print(a,m,n);


}
void read(int a[][10],int m,int n)
{
    printf("Enter %dx%d matrix values : ",m,n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

}

void print(int a[][10],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        printf("\n");
        for(int j=0;j<m;j++)
            printf("%d ",a[i][j]);
    }
}
