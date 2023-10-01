//38)	Write a C program to check whether a number is Armstrong number or not.
/*An Armstrong number of three digits is an integer such that the sum of the
cubes of its digits is equal to the number itself. For example, 371 is an
Armstrong number since 3**3 + 7**3 + 1**3 = 371. Write a program to find
all Armstrong number in the range of 0 and 999.*/

#include <stdio.h>

void main()
{
    int n,n1,am=0;
    printf("Enter a number to check amstrong or not : ");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        int rem;
        rem = n%10;
        am = am+(rem*rem*rem);
        n=n/10;
    }
    if (n1==am)
        printf("%d is amstrong number ",am);
    else
        printf("%d is not an amstrong number ",n1);
}
