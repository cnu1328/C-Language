#include <stdio.h>
void natural(int *n);
void reverse(int *n);
void numr(int *n);
void main()
{
    int n,num;
    printf("Enter a number to print natural numbers : ");
    printf("Enter a number to reverse it : ");
    scanf("%d",&n);
    natural(&n);
    reverse(&n);
    printf("\nEnter a number to reverse it : ");
    scanf("%d",&num);
    numr(&num);
}
void natural(int *n)
{
    int i;
    for(i=1;i<=*n;i++)
        printf("%d, ",i);
}
void reverse(int *n)
{
    int i;
    printf("\n");
    for(i=*n;i>0;i--)
        printf("%d, ",i);
}

void numr(int *num)
{
    int r,s=0;
    while(*num>0)
    {
        r = *num%10;
        *num = *num/10;
        s=s*10+r;

    }
    printf("%d",s);
}
