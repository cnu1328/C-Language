#include <stdio.h>
void alpha(char c);
void main()
{
    char c='a';
    alpha(c);
}

void alpha(char c)
{
    if(c<='z')
    {
        printf("%c, ",c);
        alpha(c+1);
    }

}
