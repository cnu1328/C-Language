#include <stdio.h>
//2)Write a C program print total number of days in a month using switch case.
void main()
{
    int n;
    printf("Enter a number from 1 to 12 to check number of days in entered month : ");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("Your Entered JANUARY Month. It has 31 days");
        break;
    case 2:
        printf("You Entered FEBRUARY Month. It has 28 days");
        break;
    case 3:
        printf("You Entered March Month. It has 31 days");
        break;
    case 4:
        printf("You Entered April Month. It has 30 days");
        break;
    case 5:
        printf("You Entered May Month. It has 31 days");
        break;
    case 6:
        printf("You Entered June Month. It has 30 days");
        break;
    case 7:
        printf("You Entered July Month. It has 31 days");
        break;
    case 8:
        printf("You Entered August Month. It has 31 days");
        break;
    case 9:
        printf("You Entered September Month. It has 30 days");
        break;
    case 10:
        printf("You Entered Octomber Month. It has 31 days");
        break;
    case 11:
        printf("You Entered November Month. It has 30 days");
        break;
    case 12:
        printf("You Entered December Month. It has 31 days");
        break;
    default:
        printf("Please Enter numbers form 1 to 12");
    }
}
