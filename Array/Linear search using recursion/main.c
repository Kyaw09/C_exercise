#include <stdio.h>
#include <stdlib.h>
void linearsearch(int A[],int num,int searchkey);
void prin(int A[],int num,int i);
int main()
{
    printf("Hello world!\n");
    int num,i;
    printf("Enter number of arrays:\t");
    scanf("%d",&num);
    int A[num];
    for(i=0;i<num;i++)
    {
      printf("n[%d]",i);
      scanf("%d",&A[i]);
    }
    prin(A,num,0);
    int searchkey;
    printf("\nEnter searchkey:\t");
    scanf("%d",&searchkey);
    linearsearch(A,num,searchkey);
    return 0;
}
void linearsearch(int A[],int num,int searchkey)
{
     if(A[num-1]==searchkey)
     {
         printf("\nFOUND at A[%d]",num-1);
         linearsearch(A,num-1,searchkey);
     }
}
void prin(int A[],int num,int i)
{
   if(i>=num)
   {
       return;
   }
   printf("%d\t",A[i]);
   prin(A,num,i+1);
}
