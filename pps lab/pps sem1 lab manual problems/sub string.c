//i)	To insert a sub-string in to a given main string from a given position.
#include <stdio.h>
#include <string.h>

void main()
{
    char a[20],b[20],c[20];
    int l1,l2,p,i,j,k;
    printf("Enter a string : ");
    gets(a);
    printf("Enter a substring : ");
    gets(b);
    printf("Enter position from where it to be inserted : ");
    scanf("%d",&p);
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<p-1;i++)
        c[i]=a[i];
    for(j=0;j<l2;j++)
    {
       c[i]=b[j];
       i++;
    }
    for(k=p-1;k<l1;k++)
    {
        c[i]=a[k];
        i++;
    }
    c[i]='\0';
    printf("Your resultant string is %s",c);


}

