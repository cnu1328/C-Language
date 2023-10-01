#include <stdio.h>

void main()
{
    int i,j,n,c;
    printf("Enter a number to print all prime numbers from 1 to : ");
    scanf("%d",&n);
    printf("All prime numbers from 1 to %d is : ",n);
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
            printf("%d, ",i);
    }

}
