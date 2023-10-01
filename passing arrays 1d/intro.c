#include <stdio.h>

main()
{
    int a[10],n;
    printf("Enter n value : ");
    scanf("%d",&n);
    read(a,n);
    print(a,n);
    //sum(a,n);
    printf("\nsum of array elements : %d",sum(a,n));
    printf("\nEven sum of array elements : %d",even(a,n));
    printf("\nOdd sum of array elements : %d",odd(a,n));
    prime(a,n);
}

void read(int a[],int n)
{
    printf("Enter array values : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

}

void print(int b[],int k)
{
    for(int i=0;i<k;i++)
        printf("%d, ",b[i]);

}

int sum(int a[],int k)
{
    int s=0;
    for(int i=0;i<k;i++)
    {
        s=s+a[i];
    }
    return s;

}

int even(int b[],int m)
{
    int s =0;
    for(int i=0;i<m;i++)
    {
        if(b[i]%2==0)
            s+=b[i];
    }

    return s;
}
int odd(int c[],int n)
{
    int s =0;
    for(int i=0;i<n;i++)
    {
        if(c[i]%2!=0)
            s+=c[i];
    }

    return s;

}

void prime(int a[],int n)
{

    printf("\nPrime numbers are : ");
    for(int i=1;i<=n;i++)
    {
        int c=0;
        for(int j=1;j<=i;j++)
        {
            if(a[i]%j==0)
                c++;
        }
        if(c==2)
            printf("%d, ",a[i]);

    }
}
