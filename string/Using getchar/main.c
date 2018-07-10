#include<stdio.h>
#include<string.h>
#define SIZE 80
int main(void)
{
   int i,c;
   char sentence[SIZE];
   printf("Enter line of text:\t");
   while(i<SIZE-1 && (c=getchar())!='\n')
   {
      sentence[i++]=c;
   }
   puts(sentence);
}
