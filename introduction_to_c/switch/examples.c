//arithematic operations
#include <stdio.h>

void main()
{
    int a,b,c;
    char op;
    printf("Enter your operations would u like to do(+,-,*,/,%) : ");
    scanf("%c",&op);

    printf("Enter you first and second values : ");
    scanf("%d%d",&a,&b);


    switch(op)
    {
    case '+':
        c = a+b;
        printf("%d + %d = %d",a,b,c);
        break;
    case '-':
        c = a-b;
        printf("%d - %d = %d",a,b,c);
        break;
    case '*' :
        c = a*b;
        printf("%d * %d = %d",a,b,c);
        break;
    case '/' :
        if (b==0)
            printf("Division of a number by zero is not possible");
        else
        {
            c = a/b;
            printf("%d / %d = %d",a,b,c);

        }
        break;
    case '%':
        c=a%b;
        printf("%d %% %d = %d",a,b,c);
        break;
    default :
        printf("Invalid Input. Please Enter your Operator like (+,-,*,/,%)");

    }
}
