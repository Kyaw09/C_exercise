#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
char reverse(char st[30])
{

}
int main(void)
{
  char st[30]="aabbaa";
  char st1[30];
  strcpy(st1,st);
  strrev(st1);
  printf("String before strrev():\t%s",st);
  printf("\nString after strrev():\t%s",st1);
}
/*bool istrue(char str,char str1)
{
   strcpy(str1,str);
   strrev(str1);
   if(strcmp(str,str1)==0)
   {
      return true;
   }
   else
   {
      return false;
   }
}*/
        //char st2[30];
   /* printf("Enter string:\t");
    scanf("%s",str);*/
    //strcpy(st2,st1);
    //puts(strrev(st1));
    /*if(strcmp(st1,st2)==0)
    {
      printf("\nP");
    }
    else
    {
      printf("\n Not P");
    }*/
    /*bool result=istrue(str,str1);
    if(result==true)
    {
      printf("\nP");
    }
    else{
      printf("\n Not P");
    }*/
    //return 0;

