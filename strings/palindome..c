#include <stdio.h>
char copy(char c[],char b[]);
char palin(char c[]);
void main()
{
    int c[100],b[100],a[100];
    printf("Enter a string to check palindrome : ");
    gets(c);
    copy(c,b);
    palin(c);
}
char copy(char c[],char b[])
{
    int i;
    for(i=0;c[i]!='\0';i++)
    {
        b[i]=c[i];
    }
    puts(b);
    puts(c);
}
int len(char c[])
{
    int i=0;
    while(c[i]!='\0')
        i++;
    return i;
}
char palin(char c[])
{
    int i,f=0;
    for(i=0;i<len(c);i++)
    {
        if(c[i]!=c[len(c)-i-1])
        {
            f=1;
            break;
        }
    }
    if(f==0)
        printf("It's a palindrome");
    else
        printf("It's not a palindrome");
}
