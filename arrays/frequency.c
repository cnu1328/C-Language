#include <stdio.h>

void main()
{
    int a[10]={0},i,n;
    printf("Enter a number to enter number of array values : ");
    scanf("%d",&n);
    while(n>0){
        int r;
        r= n%10;
        a[r]=a[r]+1;
        n=n/10;

    }
    for(i=0;i<10;i++)
    {
        if(a[i]!=0)
            printf("%d appeared %d times\n",i,a[i]);
    }
}
