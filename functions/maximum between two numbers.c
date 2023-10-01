#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter first and second values : ");
    scanf("%d%d",&a,&b);
    big(a,b);
    large(a,b);
}
int big(int a,int b)
{
    switch(a>b)
    {
    case 1:
        {
            printf("%d is a big number",a);
            break;
        }
    default :
        printf("%d is a big number",b);



    }
}

int large(int a,int b)
{
    if(a>b)
        printf("%d is a big number",a);
    else
        printf("%d is a big number",b);
}
