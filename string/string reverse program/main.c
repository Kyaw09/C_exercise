#include<stdio.h>
#include<string.h>
void reverse(char str[200])
{
    int i=0;
   int j=0;
   char temp;
   j=strlen(str)-1;
   while(i<j)
   {
      temp=str[j];
      str[j]=str[i];
      str[i]=temp;
      i++;
      j--;
   }
   printf("%s",str);
}
int main(void)
{
   char str[200];
   printf("\nEnter string:\t");
   gets(str);
   printf("\nThe reverse of string\n");
   reverse(str);
}
