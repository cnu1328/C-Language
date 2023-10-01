//8)	Write a C program to create Simple Calculator using switch case.
#include <stdio.h>
#include <math.h>

void main()
{
    float a,b,c;
    int a1,b1;
    char op;
    printf("WELCOME TO THE SIMPLE CALCULATOR");
    printf("\n");
    printf("Enter [number] and [operator like +,-,*,/,%] and [other number] : ");
    printf("\n");
    scanf("%f%c%f",&a,&op,&b);

    switch (op)
    {
    case '+':
        c = a+b;
        printf("%.1f%c%.1f = %.1f",a,op,b,c);
        break;
    case '-':
        c = a-b;
        printf("%.1f%c%.1f = %.1f",a,op,b,c);
        break;
    case '*':
        c = a*b;
        printf("%.1f%c%.1f = %.1f",a,op,b,c);
        break;
    case '/':
        c = a/b;
        printf("%.1f%c%.1f = %.1f",a,op,b,c);
        break;
    case '%':
        a1 = (int)a;
        b1 = (int)b;
        c = a1%b1;
        printf("%.1f%c%.1f = %.1f",a,op,b,c);
        break;
    default:
        printf("Invalid input");
    }
}
