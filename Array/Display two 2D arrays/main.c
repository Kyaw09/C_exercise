#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Hello world!\n");
    int n,i,r,c;
    printf("Enter row number of 2D arrays:\t");
    scanf("%d",&r);
    printf("Enter column number of 2D arrays:\t");
    scanf("%d",&c);
    int A[r][c];
    for(i=0;i<r;i++)
    {
         for(n=0;n<c;n++)
         {
             printf("\nA[%d][%d]:\t",i,n);
             scanf("%d",&A[i][n]);
         }
    }
    for(i=0;i<r;i++)
    {
         printf("\n");
         for(n=0;n<c;n++)
         {
             printf("%d\t",A[i][n]);
         }
    }
    int sum;
    for(n=0;n<c;n++)
    {
         sum=0;
         for(i=0;i<r;i++)
         {
             sum+=A[i][n];
         }
         printf("\nThe sum of %d column:\t%d ",n,sum);
    }
    for(i=0;i<r;i++)
    {
         sum=0;
         for(n=0;n<c;n++)
         {
             sum+=A[i][n];
         }
         printf("\nThe sum of %d row :\t%d",i,sum);
    }
    int max;
    for(i=0;i<r;i++)
    {
        max=A[0][0];
        for(n=0;n<c;n++)
        {
            if(A[i][n]>max)
            {
                max=A[i][n];
            }
        }
        printf("\nThe maximun of %drow value:\t%d",i,max);
    }
    for(n=0;n<c;n++)
    {
        max=A[0][0];
        for(i=0;i<r;i++)
        {
           if(A[i][n]>max)
           {
               max=A[i][n];
           }
        }
        printf("\nThe highest number of %d column is \t %d ",n,max);
    }
    return 0;
}
