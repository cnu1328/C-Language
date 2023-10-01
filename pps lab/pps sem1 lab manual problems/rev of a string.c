#include <stdio.h>
#include <string.h>
int rev(char a[],int l);
void main()
{
    char a[10];
    int l;
    printf("Enter a string to reverse it : ");
    gets(a);
    l=strlen(a);
    rev(a,l);
}

int rev(char a[],int l)
{
    if(l>=0)
    {
        printf("%c",a[l-1]);
        rev(a,l-1);

    }

}
