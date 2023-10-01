#include <stdio.h>

void main()
{
    char c[20],b[20];
    gets(c);
    gets(b);
    substr(c,b);
}

void substr(char c[],char [])
{
    l=strlen(c);
    l1=strlen(b);
    for(i=0;i<l;i++)
    {
        int f=0;
        if(c[i]==b[0])
        {
            for(j=i;j<i+l2;j++)
            {
                if(c[j]!=b[j-i])
                {

                }
            }
        }
    }
}
