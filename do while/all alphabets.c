//11)	Write a C program to print all alphabets from a to z. - using while loop

#include <stdio.h>

/*void main()
{
    char c=0,i;
    for(i=1;i<=255;i++)
        printf("%c\n",c+i);
}


*/
#include <stdio.h>

void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a=0,b=0,c=0,d=0;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if((a-c)>(b-d))
            printf("First");
        else if((a-c)<(b-d))
            printf("Second");

        else
            printf("any");
    }
}

