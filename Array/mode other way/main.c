#include <stdio.h>
#include <stdlib.h>
void mode(int A[],int n,int B[],int size);
int main()
{
    printf("Hello world!\n");
    int B[10],n,i;
    printf("Enter number of arrays :\t");
    scanf("%d",&n);
    int A[n];
        for(i=0;i<n;i++)
    {
        //printf("\nEnter value of each arrays:\t");
        //scanf("%d",&v);
        printf("\nA[%d]=",i);
        scanf("%d",&A[i]);
    }
    printf("\nThe elements of arrays:\t");
    for(i=0;i<n;i++)
    {
       printf("%d \t",A[i]);
    }
    int large=A[0];
    for(i=0;i<n;i++)
    {
       if(A[i]>large)
       {
           large=A[i];
       }
    }
    printf("\n large number is %d",large);
    mode(A,n,B,10);
    return 0;
}
void mode(int A[],int n,int B[],int size)
{
   int i;
   for(i=0;i<10;i++)
   {
        B[i]=0;
   }
   for(i=0;i<n;i++)
   {
       ++B[A[i]];
   }
   int max=B[0];
   int modeva;
   for(i=0;i<n;i++)
   {
       if(B[i]>max)
       {
          max=B[i];
          modeva=i;
       }
   }
   for(i=0;i<=n;i++)
   {
       printf("\n%d count is %d",i,B[i]);
   }
   printf("\nThe max value is:\t%d",max);
   printf("\nThe mode value is :\t %d \n",modeva);
   //print repeat number
   for(i=0;i<10;i++)
   {
       if(B[i]!=0)
       {
          printf(" %d \t",A[i]);
       }
   }
}
