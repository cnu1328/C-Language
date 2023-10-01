#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to print its date : ");
    scanf("%d",&n);
    week(n);
}
int week(int n)
{
    switch(n)
    {
    case 1:
    {
        printf("SUNDAY");
        break;
    }

    case 2:
    {
        printf("MONDAY");
        break;
    }

    case 3:
    {
        printf("TUESDAY");
        break;
    }

    case 4:
    {
        printf("WEDNESDAY");
        break;
    }
    case 5:
    {
        printf("THURSDAY");
        break;
    }
    case 6:
    {
        printf("FRIDAY");
        break;
    }
    case 7:
    {
        printf("SATURDAY");
        break;
    }
    default :
        printf("Enter number should be from 1 to 7");
    }
}

