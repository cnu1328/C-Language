//19)	Write a C program to find first and last digit of a number.

#include <stdio.h>

void main()
{
    int n,rem1,rem;
    printf("Enter your number : ");
    scanf("%d",&n);
    rem1 = n%10;
    while(n>0){
        rem= n%10;
        n=n/10;
    }


    printf("Your first digit of number is %d",rem);
    printf("\n");
    printf("Your last digit of number is %d",rem1);

}
