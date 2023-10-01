#include <stdio.h>

void main()
{
    int n,a,b,c,n1,co=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    n1=n;
    while(n1>0)
    {
        co++;
        n1/=10;
    }
    if(co==3)
    {
        a=n%10;
        n/=10;
        b=n%10;
        n/=10;
        c=n%10;
        printf("%d hundreds, %d tens, %d units",c,b,a);
    }
    else
        printf("please enter 3 digit number");

}
