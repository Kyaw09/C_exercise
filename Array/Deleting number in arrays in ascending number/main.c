#include <stdio.h>
#include <stdlib.h>
void prin(int A[],int n,int i);
void dele(int A[],int n,int i);
int main()
{
    printf("Hello world!\n");
    int n,i;
    printf("\nEnter number of arrays:\t");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        printf("A[%d]=\t",i);
        scanf("%d",&A[i]);
    }
    prin(A,n,0);
    dele(A,n,i);
    return 0;
}
void prin(int A[],int n,int i)
{
     if(i>=n)
     return;
     printf("%d\t",A[i]);
     prin(A,n,i+1);
}
void dele(int A[],int n,int i)
{
     int num,j;
     printf("\nEnter value to delete:\t");
     scanf("%d",&num);
     for(i=0;i<n;i++)
     {
         if(A[i]==num)
         {
            for(j=i;j<n;j++)
            {
                A[j]=A[j+1];
            }
         }
     }
     n=n-1;
     prin(A,n,0);
}
