//3.	C program that reads N integer numbers and finds the sum

#include <stdio.h>

void main()
{
    int n,i,sum=0;
    printf("Enter a number to enter number of array values : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Entered array values : ");
    for(i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
        sum+=a[i];
    }
    printf("\nSum of the array values is %d",sum);

}
