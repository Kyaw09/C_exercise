#include <stdio.h>
#include <stdlib.h>
void prin(int A[],int i,int n);
void dele(int A[],int n);
//void revearay(int A[],int i,int n);
int main()
{
    printf("Hello world!\n");
    int n;
    printf("Enter number of arrays:\t");
    scanf("%d",&n);
    int A[n];
    int i=n;
    for(i=0;i<n;i++)
    {
       printf("Enter value of A[%d]",i);
       scanf("%d",&A[i]);
    }
    printf("The value before deleting :\t");
    prin(A,0,n);
    dele(A,n);
    int size=n;
    i=size;
    //revearay(A,i,n);
    return 0;
}
void prin(int A[],int i,int n)
{
    if(i>=n)
    return;
    printf("%d\t",A[i]);
    prin(A,i+1,n);
}
void dele(int A[],int n)
{
    int num,pos,i;
    //printf("\nEnter value to delete:\t");
    //scanf("%d",&num);
    printf("\nEnter position to delete value:\t");
    scanf("%d",&pos);
    for(i=pos;i<=n-1;i++)
    {
        A[i]=A[i+1];
    }
    n--;
    prin(A,0,n);
}
/*void revearay(int A[],int i,int n)
{
    if(i!=0)
    {
       printf("%d",A[i]);
       revearay(A,i-1,n);
    }
    else{
       printf("\n");
    }

}*/
