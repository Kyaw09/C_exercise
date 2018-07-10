#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n,i,j,num;
    printf("Enter number of arrays:\t");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
       printf("\nEnter the value of A[%d]",i);
       scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
       printf("%d\t",A[i]);
    }
    printf("\nEnter the value to insert arrays:\t");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(A[i]>num)
        {
            for(j=n-1;j>=i;j--)
            {
                 A[j+1]=A[j];
            }
            A[i]=num;
            break;
        }
    }
    n=n+1;
    printf("\nThe array after insertion of %d:\t",num);
    for(i=0;i<n;i++)
    {
        printf("%d \t ",A[i]);
    }
    return 0;
}
