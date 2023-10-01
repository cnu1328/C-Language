#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number to print even numbers and odd numbers and its sum : ");
    scanf("%d",&n);
    even(n);
    odd(n);
    natural(n);
}
int even(int n)
{
    int i,sume=0;
    //pritnf("All even number from 1 to %d are : ",n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sume=sume+i;
            printf("%d, ",i);
        }
    }
    printf("\nSum of even numbers are %d\n",sume);

}
int odd(int n)
{
    int i,sumo=0;
    //pritnf("\nAll odd numbers from 1 to n : ");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sumo=sumo+i;
            printf("%d, ",i);
        }
    }
    printf("\nSum odd numbers are %d\n",sumo);

}
int natural(int n)
{
    int i,sumn=0;
    for(i=1;i<=n;i++)
    {
        sumn=sumn+i;
    }
    printf("\nSum of natural numbers are %d",sumn);
}
