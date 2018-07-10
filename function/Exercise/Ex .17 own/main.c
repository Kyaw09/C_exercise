
#include<stdio.h>
#include<stdbool.h>
bool multiple(int f,int l);
int main()
{
   int f,l;
   printf("Enter number:\t");
   scanf("%d %d",&f,&l);
   if(multiple(f,l))
   {
       printf("\n True");
   }
   else{
       printf("\n False");
   }
   return 0;
}
bool multiple(int x,int y)
{
   if(y/x==x)
   {
       return true;
   }
   else
   {
        return false;
   }
}
