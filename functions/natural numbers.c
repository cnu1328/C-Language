#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to print natural numbers from 1 to n : ");
    scanf("%d",&n);
    natural(n);

}
int natural(int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        printf("%d, ",i);
    }

}
