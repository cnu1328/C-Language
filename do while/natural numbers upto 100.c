#include <stdio.h>

void main()
{
    int m;
    do{
        scanf("%d",&m);

    }while(m!=-99);

    //simple calculator
    int a,b,c;
    char ch;
    do{
        scanf("%d%c%d",&a,&ch,&b);
        switch(ch)
        {
        case '+':
            c = a+b;
            printf("%d%c%d=%d",a,ch,b,c);
            break;
        case '-':
            c= a-b;
            printf("%d%c%d=%d",a,ch,b,c);
            break;
        case '*':
            c = a*b;
            printf("%d%c%d=%d",a,ch,b,c);
            break;
        case '/':
            c = a/b;
            printf("%d%c%d=%d",a,ch,b,c);
            break;
        case '%':
            c = a%b;
            printf("%d%c%d=%d",a,ch,b,c);
            break;

        }
    }while(ch!='!');
}
