#include <stdio.h>


void main()
{
    int a,b,c;
    printf("Enter three numbers line by line after pressing enter : ");
    scanf("%d%d%d",&a,&b,&c);

    if (a>b)
    {
        if (a>c)
            printf("%d is greater than %d and %d",a,b,c);
        else
            printf("%d is greater than %d and %d",c,a,b);
    }
    else
    {
        if (b>c)
            printf("%d is greater than %d and %d",b,a,c);
        else
            printf("%d is greater than %d and %d",c,a,b);
    }

    printf("\n");

    if (a<b)
    {
        if (a<c)
            printf("%d is smaller than %d and %d",a,b,c);
        else
            printf("%d is smaller than %d and %d",c,a,b);
    }
    else
    {
        if (b<c)
            printf("%d is smaller than %d and %d",b,a,c);
        else
            printf("%d is smaller than %d and %d",c,a,b);
    }

    printf("\n");

    if (a>b)
    {
        if (b>c)
            printf("%d is middle between %d and %d",b,a,c);
        else
        {
            if (a>c)
                printf("%d is middle between %d and %d",c,a,b);
            else
                printf("%d is middle between %d and %d",a,b,c);

        }

    }
    else
    {
        if (b<c)
            printf("%d is middle between %d and %d",b,a,c);
        else
        {
            if (a<c)
                printf("%d is middle between %d and %d",c,a,b);
            else
                printf("%d is middle between %d and %d",a,b,c);
        }
    }






}
