#include<stdio.h>
int fre(int C)
{
   return C*9/5+32;
}
int C(int fre)
{
   return (fre-32)*5/9;
}
int main(void)
{
   unsigned int i,c;
   printf("\nFahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees\n");
   for(i=1;i<=100;i++)
   {
       printf("%8d",fre(i));
   }
   printf("\nCelsius equivalents of all Fahrenheit temperatures from 0 to 100 degree\n");
   for(c=32;c<=212;c++)
   {
       printf("%8d",C(c));
   }
}
