#include <stdio.h>

void main()
{
    int a,b,op;
    printf("Enter first and second value of a number : ");
    scanf("%d%d",&a,&b);
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division : ");
    scanf("%d",&op);
    calc(a,b,op);
}
int  calc(int a,int b,int op)
{
    switch(op)
    {
    case 1:
        printf("%d",add(a,b));
        break;
    case 2:
        printf("%d",sub(a,b));
        break;
    case 3:
        printf("%d",mul(a,b));
        break;
    default:
        printf("Program finished");
    }

}
int add(int a,int b)
{
    int c=a+b;
    return c;
}
int sub(int a,int b)
{
    int c=a-b;
    return c;
}
int mul(int a,int b)
{
    int c=a*b;
    return c;
}


