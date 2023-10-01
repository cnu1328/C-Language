#include <stdio.h>

int mul(int i,int n)
{
    if(i>10)
        return 0;
    printf("%d*%d=%d\n",n,i,n*i);
    mul(i+1,n);


}
void main()
{
    int n,i;
    printf("Enter a number to print multiplication table : ");
    scanf("%d",&n);
    mul(i=1,n);
}
