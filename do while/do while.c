#include <stdio.h>

void main()
{
    int a,b,c,op;
    printf("Enter two numbers : ");

    scanf("%d%d",&a,&b);
    do
    {
        printf("option 1 for addition, 2 for subtraction, 3 for multiplication, 4 for exit : ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            c = a+b;
            printf("%d+%d=%d\n",a,b,c);
            break;
        case 2:
            c = a-b;
            printf("%d-%d=%d\n",a,b,c);
            break;
        case 3:
            c = a*b;
            printf("%d*%d=%d\n",a,b,c);
        }

    }while(op!=4);
}
