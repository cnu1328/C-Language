//3.	Write a C program to count the lines, words and characters in a given text

#include <stdio.h>
#include <stdio.h>

void main()
{
    char s[100];
    int line,word,ch,i;
    line=word=ch=0;
    printf("Enter a string to count lines,words and characters in a string : \n");
    scanf("%[^~]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ' && ch!=0)
        {
            word++;
        }
        else if(s[i]=='\n')
        {
            word++;
            line++;
        }
        else if(s[i]!=' ' && s[i]!='\n')
            ch++;
    }
    if(ch>0)
    {
        word++;
        line++;
    }
    printf("Total characters in a string : %d\n",ch);
    printf("Total words in a string : %d\n",word);
    printf("Total lines in a string : %d\n",line);

}
