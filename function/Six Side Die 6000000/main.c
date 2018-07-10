#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  unsigned int frequency1=0;
  unsigned int frequency2=0;
  unsigned int frequency3=0;
  unsigned int frequency4=0;
  unsigned int frequency5=0;
  unsigned int frequency6=0;
  unsigned int i;
  int face;
  for(i=1;i<=6000000;++i)
  {
     face=1+rand()%6;
     switch(face)
     {
       case 1:++frequency1;break;
       case 2:++frequency2;break;
       case 3:++frequency3;break;
       case 4:++frequency4;break;
       case 5:++frequency5;break;
       case 6:++frequency6;break;
     }
  }
  printf("%s %13s\n","Face","frequency");
  printf("1 %13d\n",frequency1);
  printf("2 %13d\n",frequency2);
  printf("3 %13d\n",frequency3);
  printf("4 %13d\n",frequency4);
  printf("5 %13d\n",frequency5);
  printf("6 %13d\n",frequency6);
}
