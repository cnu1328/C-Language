//1.	C program that reads N integer numbers and searches for a given number using linear search
#include <stdio.h>

void main()
{
    int n,i,s,f=0;
    printf("Enter a number to enter number array values : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array values : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Your entered array values : ");
    for(i=0;i<n;i++)
        printf("%d, ",a[i]);
    printf("\nEnter a searching number : ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==a[i])
        {
            f=1;
            break;
        }

    }
    if(f==1)
        printf("Entered element is present");
    else
        printf("Entered element is not found");
}
