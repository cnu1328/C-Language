//2.	Write a C program to determine if the given string is a palindrome or not

#include <stdio.h>
#include <string.h>

void main()
{
    char a[20];
    printf("Enter a string : ");
    scanf("%s",a);
    int len,i,f=0;
    len = strlen(a);
    for(i=0;i<len-1;i++)
    {
        if(a[i]!=a[len-1-i])
            f=1;
    }
    if(f==0)
        printf("palindrome");
    else
        printf("not a palindrome");
}
