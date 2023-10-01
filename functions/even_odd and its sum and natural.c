#include <stdio.h>
int even(int n);
int odd(int n);
int natural(int n);
void main()
{
    int n,r,o,n1;
    printf("Enter a number : ");
    scanf("%d",&n);
    r=even(n);
    printf("Sum of even numbers from 1 to %d is %d\n",n,r);
    o=odd(n);
    printf("Sum of odd numbers from 1 to %d is %d\n",n,o);
    n1=natural(n);
    printf("Sum of the natural numbers from 1 to %d is %d",n,n1);
}
int even(int n)
{
    int i,sume=0;
    printf("All even numbers : ");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sume+=i;
            printf("%d, ",i);
        }
    }
    return sume;
}

int odd(int n)
{
    int i,sumo=0;
    printf("All odd numbers : ");
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            printf("%d, ",i);
            sumo +=i;
        }
    }
    return sumo;
}
int natural(int n)
{
    int i,sumn=0;
    for(i=1;i<=n;i++)
        sumn+=i;
    return sumn;
}
