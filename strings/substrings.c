#include <stdio.h>
#include <string.h>

void main()
{
    int c[20],b[20];
    printf("Enter a string : ");
    gets(c);
    printf("Enter other string to check other substring : ");
    gets(b);
    substring(c,b);
}

void substring(char c[],char b[])
{
    int l1=strlen(c),l2=strlen(b),i,j,f;
    for(i=0;i<l1;i++)
    {
        if(c[i]==b[0])
        {
            f=0;
            for(j=1;j<l2;j++)
            {
                if(c[i+j]!=b[j])
                {
                    f=1;
                    break;
                }
            }
        }
    }
    if(f==0)
        printf("present");
    else
        printf("Not present");
}
