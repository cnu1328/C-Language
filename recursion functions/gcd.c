#include <stdio.h>

int gcd(int a,int b);
int lcm(int a,int b);

int main()
{
    int a,b;
    printf("Enter a and b value : ");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is %d",a,b,gcd(a,b));
    printf("\n");
    printf("LCM of %d and %d is %d",a,b,lcm(a,b));
}

int gcd(int a,int b)
{
    if(a%b==0)
        return b; 
    else  
        return gcd(b,a%b);
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
