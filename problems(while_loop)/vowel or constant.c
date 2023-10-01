//3)Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include <stdio.h>

void main()
{
    char ch;
    printf("Enter your character to check Vowel or Consonant : ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a'|'A':
        printf("Entered character is a Vowel");
        break;
    case 'e'|'E':
        printf("Entered character is a Vowel");
        break;
    case 'i'|'I':
        printf("Entered character is a Vowel");
        break;
    case 'o'|'O':
        printf("Entered character is a Vowel");
        break;
    case 'u'|'U':
        printf("Entered character is a Vowel");
        break;
    default:
        printf("Entered Character is Consonant");
    }

}
