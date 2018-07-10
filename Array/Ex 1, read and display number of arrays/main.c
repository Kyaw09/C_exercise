#include <stdio.h>
#include <stdlib.h>
int sum(int A[],int n);
float mean(int A[],int n);
float medium(int A[],int n);
void sort(int A[],int n);
int largest(int A[],int n);
int main()
{
    printf("Hello world!\n");
    int n,i,f;
    printf("Enter the number of arrays");
    scanf("%d",&n);
    int A[n];
    //int freq[f];
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
    int a=sum(A,n);
    printf("\n sum=\t%d",a);
    float b=mean(A,n);
    printf("\n mean=\t%f",b);
    float c=medium(A,n);
    printf("\n medium=\t%f",c);\
    f=largest(A,n);
    printf("\n largest number =\t%d",f);
    //printf("");
    //int d=sort(A,n);
    //sort(A,n);
    return 0;
}
int sum(int A[],int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=A[i];
    }
    return sum;
}
float mean(int A[],int n)
{
    int a=0;
    int i;
    for(i=0;i<n;i++)
    {
        a+=A[i];
    }
    return (float)a/n;
}
float medium(int A[],int n)
{
    sort(A,n);
    if(n/2==0)
    {
       return (float)(A[n/2]+A[n/2+1])/2;
    }
    else
    {
       return (float)A[n/2];
    }

}
void sort(int A[],int n)
{
    int i,j;
    for(j=0;j<n-1;j++)
    {
         for(i=0;i<n;i++)
         {
            if(A[i]>A[i+1])
            {
                int kyaw=A[i];
                A[i]=A[i+1];
                A[i+1]=kyaw;
            }
         }
    }
    for(i=0;i<n;i++)
    {
         printf("\n%d",A[i]);
    }
}
int largest(int A[],int n)
{
   int i,large,pos;
   large=A[0];
   pos=0;
   for(i=1;i<n;i++)
   {
       if(A[i]>large)
       {
           large=A[i];
           pos=i;
       }
   }
  return large;
}
