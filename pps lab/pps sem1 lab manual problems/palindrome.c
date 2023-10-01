//2.	Write a C program to determine if the given string is a palindrome or not

#include <stdio.h>
#include <string.h>

void main()
{
    char s[100];
    int l,f=0,i;
    printf("Enter a string to check palindrome or not : ");
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            f=1;
            break;
        }
    }
    if(f==0)
        printf("Given string is a palindorme");
    else
        printf("Given string is not a palindrome");

}
