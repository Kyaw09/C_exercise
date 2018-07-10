#include<stdio.h>
unsigned long long int fibonanic(unsigned int num);
int main()
{
   unsigned int i,n;
   printf( "%s", "Enter an number of fibonanic:\t " );
   scanf( "%u", &n);
   for(i=0;i<=n;i++)
   printf("\n%u=%llu",i,fibonanic(i));

   return 0;
}
unsigned long long int fibonanic(unsigned int num)
{
   if(num==0 || num==1)
   {
       return num;
   }
   else{
     return (fibonanic(num-1)+fibonanic(num-2));
   }
}
