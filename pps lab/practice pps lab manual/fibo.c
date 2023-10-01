#include <stdio.h>

void main()
{
    int n,a,b,c,i;
    printf("Enter a number :");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d, %d, ",a,b);
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d, ",c);
    }
}
