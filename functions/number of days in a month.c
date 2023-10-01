#include <stdio.h>

int main()
{
    int n;
    printf("Enter month number to print number of days in a month : ");
    scanf("%d",&n);
    date(n);
}
int date(int n)
{
    switch(n)
    {
    case 1:
        {
            printf("Number of days in January is 31");
            break;
        }
    case 2:
        {
            printf("Number of days in Febuary 28. If it is leap year it has 29 days.");
            break;
        }
    case 3:
        {
            printf("Number of days in March 31");
            break;
        }
    case 4:
        {
            printf("Number of days in April 30");
            break;
        }
    case 5:
        {
            printf("Number of days in May 31");
            break;
        }
    case 6:
        {
            printf("Number of days in June  30");
            break;
        }
    case 7:
        {
            printf("Number of days in July 31.");
            break;
        }
    case 8:
        {
            printf("Number of days in August 31.");
            break;
        }
    case 9:
        {
            printf("Number of days in September 30");
            break;
        }
    case 10:
        {
            printf("Number of days in October 31.");
            break;
        }
    case 11:
        {
            printf("Number of days in November 30.");
            break;
        }
    case 12:
        {
            printf("Number of days in December 31");
            break;
        }
    default:
        printf("To get date of a month Enter value should be from 1 to 12");
    }
}
