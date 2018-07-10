#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    printf("Hello world!\n");
    char ch;
    printf("Enter character:\t");
    scanf("%c",&ch);
    if(isupper(ch))
    {
       printf("%c",tolower(ch));
    }
    else if(islower(ch))
    {
       printf("%c",toupper(ch));
    }
    char h;
    printf("\nEnter charater:\t");
    scanf("%s",&h);
    if(ispunct(h))
    {
       printf("punctuation");
    }
    else
    {
       printf("Not");
    }
     if(isprint(h))
    {
       printf("\nprint character");
    }
    else
    {
       printf("Not");
    }
    return 0;
}
