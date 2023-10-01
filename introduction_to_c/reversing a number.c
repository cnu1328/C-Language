#include <stdio.h>

void main()
{
    int n,rev,rem,temp;
    printf("Enter your number to reverse : ");
    scanf("%d",&n);
    temp = n;
    rev = 0;
    while(n>0)
    {
        rem = n%10;
        rev = rev*10+rem;
        n= n/10;
    }
    if (temp==rev)
        printf("Your enter number is palindrome");
    else
        printf("Your enter number is not a palindrome");
    printf("\n");
    printf("your reversed number is : %d",rev);
}
