#include<stdio.h>
#include "info.h"
void rev(char *sptr)
{
 if('\0'==sptr[0])
 {
   return;
 }
 else{
   rev(&sptr[1]);
   putchar(sptr[0]);
 }
}
int main(void)
{
  char sen[SIZE];
  puts("Enter a line of text:\t");
  fgets(sen,SIZE,stdin);
  puts("\nThe reverse of a line of text:\t");
  rev(sen);
}
