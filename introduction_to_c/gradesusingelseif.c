#include <stdio.h>

void main()
{
    float m;
    printf("Enter your marks of maths subject : ");
    scanf("%f",&m);

    if (m>=91 && m<=100)
        printf("Your grade : A+");
    else if (m>=81 && m<=90)
        printf("Your grade : A");
    else if (m>=71 && m<=80)
        printf("Your grade : B");
    else if(m>=61 && m<=70)
        printf("Your grade : C");
    else if (m>=51 && m<=60)
        printf("Your grade : D");
    else if (m>=40 && m<=50)
        printf("Your grade : P");
    else
        printf("Your grade : F");

    printf("\n");

    if (m>=91)
        printf("Your grade : A+");
    else if (m>=81)
        printf("Your grade : A");
    else if (m>=71)
        printf("Your grade : B");
    else if (m>=61)
        printf("Your grade : C");
    else if (m>=51)
        printf("Your grade : D");
    else if (m>=41)
        printf("Your grade : P");
    else
        printf("Your grade : F");

    printf("\n");

    if (m<40)
        printf("Your grade : F");
    else if(m<=50)
        printf("Your grade : P");
    else if (m<=60)
        printf("Your grade : D");
    else if (m<=70)
        printf("Your grade : C");
    else if (m<=80)
        printf("Your grade : B");
    else if (m<=90)
        printf("Your grade : A");
    else
        printf("Your grade : A+");
}
