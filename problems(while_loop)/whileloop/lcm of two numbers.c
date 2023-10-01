//33)	Write a C program to find LCM of two numbers.
#include <stdio.h>

void main()
{
    int a,b,i,lcm,max;
    scanf("%d%d",&a,&b);

    max = (a>b)?a:b;
    i = max;
    while(1)
    {
        if(i%a==0 && i%b==0) {
            lcm = i;
            break;
        }
        i +=max;

    }
    printf("Lcm of %d and %d is %d",a,b,lcm);

}
