#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number to print reverse to 1 : ");
    scanf("%d",&n);
    natural(n);
}
int natural(int n)
{
    int i;
    for(i=n;i>0;i--)
    {
        printf("%d, ",i);
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("%d, ",n+1-i);
    }
}
