#include <stdio.h>

void main()
{
    int tem = 30;
    //printf("Enter your temperature to know which condition your locality facing : ");
    //scanf("%d",&tem);

    switch(tem)
    {
    case tem<0 :
        printf("You are enjoying COOL TEMPERATURE");
        break;
    case tem>=11 && tem<=25:
        printf("You are enjoying MODERATE TEMPERATURE");
        break;
    case tem>=26 && tem<=35:
        printf("You are enjoying HOT TEMPERATURE");
        break;
    case tem>=36 && tem<=45 :
        printf("You are in VERY HOT TEMPERATURE, to be take shelter on cool areas");
        break;
    case tem>=46:
        printf("You are in UNBARABLE TEMPERTURE, leave the place and go to the MODEST PLACE");
        break;
    default:
        printf("Enter you exact temperature");
    }
}
