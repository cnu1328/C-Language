#include <stdio.h>

void main()
{
    /*int a[10],n,i;
    printf("Enter the number of values in a array you give : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);*/

    int a[10];
    printf("%u",a[1]);
    printf("\n%u",a);
    printf("\n%u",&a[0]);
    printf("\n%u",&a);
    printf("\n%u",&a[0]+1);
    printf("\n%u",&a+1);
    printf("\n%u",a+1);
    printf("\n%u",*(a+1));
    printf("\n%u",a+1);
    printf("\n%u",&a+1);

    //single number appeared in a array
    int n1,d,c=0,i;
    printf("Enter a number to ask array values : ");
    scanf("%d",&n1);
    int b[n1];
    for(i=0;i<n1;i++)
        scanf("%d",&b[i]);
    printf("For what value you are searching for in the array : ");
    scanf("%d",&d);
    for(i=0;i<n1;i++)
    {
        if(b[i]==d)
            c++;
    }
    printf("%d is repeated %d times in the array",d,c);
}
