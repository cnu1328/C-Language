#include <stdio.h>
int prime(int n,int n1);
void main()
{
    int n,n1;
    printf("Enter a number to print prime or not : ");
    scanf("%d",&n);
    n1=n;
    if(prime(n,n1)==2)
        printf("It's a prime number");
    else
        printf("It's not a prime number");
}
int prime(int n,int i)
{
    if(i==1)
        return 0;
    else
    {
        if(n%i==0)
            return 2;
        else
            return prime(n,i-1);
    }



}
