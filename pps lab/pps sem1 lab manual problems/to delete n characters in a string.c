//ii)	To delete n Characters from a given position in a given string.

#include <stdio.h>
#include <string.h>

void main()
{
    char a[20];
    int p,i,n;
    printf("Enter a string : ");
    gets(a);
    printf("Enter a position and number of characters you delete : ");
    scanf("%d%d",&p,&n);
    for(i=0;a[i]!='\0';i++)
    {
        if(p-1==i)
            i=i+n;
        printf("%c",a[i]);
    }
}
