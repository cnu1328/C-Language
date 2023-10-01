#include <stdio.h>
#include <string.h>

int main()
{
    char a[]= "rgukt";

    for(int i=0;a[i]!='\0';i++)
        printf("%c",a[i]);
    printf("\n");
    char b[]= {'r','g','u','k','t'};
    for(int i=0;b[i]!='\0';i++)
        printf("%c",b[i]);
}
