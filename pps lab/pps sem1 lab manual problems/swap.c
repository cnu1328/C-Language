//iii)	Swapping the values of two variables

#include <stdio.h>
void swap(int a,int b);
void main()
{
    int a,b;
    printf("Enter a number to swap two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before swapping : a = %d and b = %d",a,b);
    swap(a,b);
}
void swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("\nAfter swapping : a = %d and b = %d",a,b);
}

