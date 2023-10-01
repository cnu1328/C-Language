#include <stdio.h>

void main()
{
    char c;
    printf("Enter your grade(A,B,C,D,E,F) to know which distinction you passed : ");
    scanf("%c",&c);

    switch(c)
    {
    case 'A':
        printf("You are passed in First Distinction");
        break;
    case 'B':
        printf("You are passed in Second Distinction");
        break;
    case 'C':
        printf("You are passed in Third Distinction");
        break;
    case 'D':
        printf("You are passed in Fourth Distinction");
        break;
    case 'E':
        printf("You are border passed");
        break;
    case 'F':
        printf("You are failed");
        break;
    default:
        printf("Invalid Input. Please enter grades like (A,B,C,D,E,F)");
    }
}
