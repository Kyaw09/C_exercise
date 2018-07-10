#include<stdio.h>
unsigned int quo(unsigned int,unsigned int);
unsigned int rem(unsigned int,unsigned int);
int main(void)
{
   unsigned int a,b,i;
   int k=10000;
   int option;
   printf("Enter number between 1 and 32767:\t");
   scanf("%u %u",&a,&b);
   while(a!=0)
   {
      i=a/k;

         printf("%d",i);
          printf("  ");
      a%=k;
      k/=10;
   }
    while(b!=0)
   {
      i=b%10;

         printf("%d",i);
          printf("  ");
      b/=10;
   }
   do
   {
     printf("\n1.Find quotient number");
     printf("\n2.Find remainder number");
     printf("\nEnter option:\t");
     scanf("%d",&option);
     switch(option)
     {
         case 1:
                printf("\nQuotient number:\t %u",quo(a,b));
                break;
         case 2:
                printf("\nRemainder number:\t %u",rem(a,b));
                break;
     }
   }while(option<3);
}
unsigned int quo(unsigned int x,unsigned int y)
{
   return(x/y);
}

unsigned int rem(unsigned int x,unsigned int y)
{
   return(x%y);
}

