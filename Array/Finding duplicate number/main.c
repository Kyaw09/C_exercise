#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n,i,j;
    int kyaw;
    printf("Emter number of arrays:\t");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
       printf("\nEnter the value of A[%d]",i);
       scanf("%d",&A[i]);
    }
    for(j=0;j<n-1;j++)
    {
         for(i=0;i<n;i++)
         {
            if(A[i]==A[j] && i!=j)
            {
                kyaw=1;
                printf("\nDuplicate number at location %d and %d",i,j);
            }
         }
    }
    if(kyaw==0)
    {
       printf("\nNot have duplicate number");
    }
    return 0;
}
