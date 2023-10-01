//factorial
//nth fibonacci
//reverse of a given stirng
//reverse of a number
#include <stdio.h>
#include <string.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int fibo(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else if(n==3)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
int revn(int n,int r)
{
    if(n==0)
        return r;
    else
        return revn(n/10,r*10+n%10);
}
char revs(char c[],int l)
{
    if(l>=0)
    {
        printf("%c",c[l-1]);
        revs(c,l-1);
    }



}
void main()
{
    char c[20];
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial of a given number is %d",fact(n));
    printf("\n%dth fibonacci of a number : %d",n,fibo(n));
    printf("\nEnter other number to reverse it : ");
    int n1;
    scanf("%d",&n1);
    printf("Reverse of a given number is : %d",revn(n1,0));
    printf("\nEnter a string to reverse it : ");
    scanf("%s",c);

    int l;
    l=strlen(c);
    revs(c,l);
}

