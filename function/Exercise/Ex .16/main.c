#include<stdio.h>
int intgerpower(int,int);
int main()
{
   int b,e;
   printf("Enter base number:\t");
   scanf("%d",&b);
   printf("Enter exponent number:\t");
   scanf("%d",&e);
   printf("\nintegerpower(%d,%d)=%d",b,e,integerpower(b,e));
   return 0;
}
int integerpower(int x,int y)
{
   int i;
   int r=1;
   for(i=1;i<=y;i++)
   {
      r*=x;
   }
   return r;
}
