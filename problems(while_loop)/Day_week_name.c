#include <stdio.h>
//1)Write a C program to print day of week name using switch case.
void main()
{
    int n;
    printf("Enter a number from 1 to 7 to get respective day of the week : ");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("Your Entered Day : Sunday");
        break;
    case 2:
        printf("Your Entered Day : Monday");
        break;
    case 3:
        printf("Your Entered Day : Tuesday");
        break;
    case 4:
        printf("Your Entered Day : Wednesday");
        break;
    case 5:
        printf("Your Entered Day : Thursday");
        break;
    case 6:
        printf("Your Entered Day : Friday");
        break;
    case 7:
        printf("Your Entered Day : Saturday");
        break;

    default:
        printf("Please Enter numbers between 1 to 7");

    }
}
