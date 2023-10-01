#include <stdio.h>
int even(int i,int n);
int odd(int i,int n);
int sume(int i,int n);
int sumo(int i,int n);
int sumn(int i,int n);
void main()
{
    int n,i=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Even numbers : ");
    even(i,n);
    printf("\n");
    printf("Odd numbers : ");
    odd(i=1,n);
    printf("\n");
    printf("Sum of Even numbers from 1 to %d is %d",n,sume(i=0,n));
    printf("\n");
    printf("Sum of Odd numbers from 1 to %d is %d",n,sumo(i=1,n));
    printf("\nSum of even numbers form 1 to %d is %d",n,sumn(i=1,n));


}
int even(int i,int n)
{
    if(i>n)
        return 0;

    printf("%d, ",i);
    even(i+2,n);

}
int odd(int i,int n)
{
    if(i>n)
        return 0;

    printf("%d, ",i);
    odd(i+2,n);

}

int sume(int i,int n)
{
    if(i>n)
        return 0;
    return i+sume(i+2,n);

}

int sumo(int i,int n)
{
    if(i>n)
        return 0;
    return i+sumo(i+2,n);
}

int sumn(int i,int n)
{
    if(i>n)
        return 0;
    return i+sumn(i+1,n);
}
