#include<stdio.h>
int reverse(int num,int k,int TOTAL,int result)
{
   //int TOTAL=0
   if(num!=0)
   {
      result=num%10;
      //printf("%d",result);
      //printf("  ");
      TOTAL=TOTAL+(result*k);
     // num=num/10;
      //k=k/10;
      reverse(num/10,k/10,TOTAL,result);
      return TOTAL;
   }
   //return TOTAL;
}
int main(void)
{
   int num;
   int k;
   int TOTAL;
   int result;
   printf("Enter number:\t");
   scanf("%d",&num);
   printf("Enter k:\t");
   scanf("%d",&k);
   /*while(num!=0)
   {
      result=num%10;
      //printf("%d",result);
      //printf("  ");
      total=total+(result*k);
      num=num/10;
      k=k/10;
   }
   printf("%d",total);*/
   printf("The reverse integer is:\t%d",reverse(num,k,0,result));
   TOTAL=reverse(num,k,TOTAL,result);
   if(TOTAL==num)
   {
     printf("\nP");
   }
   else{
     printf("\nNot P");
   }
}
