#include <stdio.h>
int revn(int n,int rev);
void main()
{
    int n;
    printf("Enter a number to reverse it : ");
    scanf("%d",&n);
    printf("reverse of the number is : %d",revn(n,0));
}
int revn(int n,int rev)
{
    if(n==0)
        return rev;
    else
        return revn(n/10,rev*10+n%10);
}
