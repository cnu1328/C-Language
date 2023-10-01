#include <stdio.h>

void main()
{
    char c[100];
    FILE *fp;
    fp = fopen("srinu.txt","r");
    printf("%s",fp);
}
