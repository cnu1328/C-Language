#include <stdio.h>

void main()
{
    FILE *fp;
    /*fp =fopen("abc.txt","r");
    printf("%s",fp);
    fp=fopen("abc.txt","w");
    printf("%s",fp);*/

    char c[100];
    fp=fopen("F:\c_language files\files handling in c\srinu1.txt","w");
    printf("Enter a paragraph : ");
    scanf("%[^~]",c);
}
