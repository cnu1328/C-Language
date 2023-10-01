#include <stdio.h>
#include <string.h>
int len(char c[]);
char srch(char c[],char ch);
char copy(char c[],char b[]);
char scat(char c[],char a[]);
void main()
{
    char c[100],ch,b[100],a[100];
    printf("Enter a string : ");
    gets(c);
    printf("Enter other string : ");
    gets(a);
    printf(" length of a given string is %d\n",len(c));
    printf("Enter a character to search given value is there or not : ");
    ch = getchar();
    srch(c,ch);
    copy(c,b);
    scat(c,a);
}

int len(char c[])
{
    int i=0;
    while(c[i]!='\0')
        i++;
    return i;
}
char srch(char c[],char ch)
{
    int i=0,f=0,d=0;
    while(c[i]!='\0')
    {
        if(c[i]==ch)
        {
            f=1;
            d++;
        }

        i++;
    }
    if(f==1)
    {
        printf("Enter character is present");
        printf("\nIt repeated %d times",d);
    }
    else
        printf("Entererd character is not present");
}
char copy(char c[],char b[])
{
    /*int i=0;
    while(c[i]!='\0')
    {
        b[i]=c[i];
        i++;
    }
    printf("\n");
    puts(b);*/
    int i,l=len(c);
    for(i=0;i<l;i++)
    {
        b[i]=c[i];
    }
    printf("\n");
    puts(b);

}
char scat(char c[],char a[])
{
    int i,l=len(c),l1=len(a);
    for(i=0;i<l1;i++)
    {
        c[l+i]=a[i];
    }
    printf("\n");
    puts(c);
}
