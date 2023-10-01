//40)	Write a C program to check whether a number is Perfect number or not.
/*perfect number, a positive integer that is equal to the sum of its proper
divisors. The smallest perfect number is 6, which is the sum of 1, 2, and 3.
Other perfect numbers are 28, 496, and 8,128.*/

#include <stdio.h>

void main()
{
    int n,i=1,perfect=0;
    printf("Enter a number to check number is perfect or not : ");
    scanf("%d",&n);


    while(i<n)
    {
        if(n%i==0)
            perfect += i;
        i++;

    }
    if (perfect==n)
        printf("%d is a perfect",perfect);
    else
        printf("%d is not a perfect",n);

}
