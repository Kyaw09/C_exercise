#include<stdio.h>
int main(void)
{
   char s[80];
   int x;
   double y;
   puts("Enter integer and double:\t");
   scanf("%d\t%lf",&x,&y);
   sprintf(s,"integer:\t%d\ndouble:\t%f",x,y);
   printf("The formatted of integer and double:\t%s\t%s",s);
   char t[]="1234 5678.0000000";
   sscanf(t,"%d\n%lf",&x,&y);
   printf("The format of integer and double:\ninteger:\t%d\ndouble:\t%f",x,y);
}
