#include <stdio.h>
#include <stdlib.h>
void displymat(int row[],int colu[],int mat[10][100][100],int n);
void displytram(int row[],int colu[],int mat[10][100][100],int n);
void sum(int row[],int colu[],int mat[10][100][100],int n);
void multiply(int row[],int colu[],int mat[10][100][100],int n);
int i,j,z,k;
int main()
{
    printf("Hello world!\n");
    int i,j,z,n;
    int mat[10][100][100];
    printf("Enter number of matrix:\t");
    scanf("%d",&n);
    int row[n],colu[n];
    for(i=0;i<n;i++)
    {
        printf("Enter number of row in matrix %d:\t",i+1);
        scanf("%d",&row[i]);
        printf("Enter number of column in matrix %d:\t",i+1);
        scanf("%d",&colu[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<row[i];j++)
        {
             for(z=0;z<colu[i];z++)
             {
                    printf("Mat%d[%d][%d]:\t",i,j,z);
                    scanf("%d",&mat[i][j][z]);
             }
        }
    }
    int option;
    do{
               printf("\n*************MAIN MEUN*************\n");
               printf("1  Display matrix\n");
               printf("2  Display transpose matrix\n");
               printf("3  Display suming of matrix 1 and matrix 2\n");
               printf("4  Display multiply matrix 1 and matrix 2\n");
               printf("5  EXIT\n");
               printf("Enter option :\t");
               scanf("%d",&option);
               switch(option){
                   case 1:displymat(row,colu,mat,n);
                          break;
                   case 2:displytram(row,colu,mat,n);
                          break;
                   case 3:sum(row,colu,mat,n);
                          break;
                   case 4:multiply(row,colu,mat,n);
                          break;
                   case 5:break;
                }
    }while(option<5);
     return 0;
}
void displymat(int row[],int colu[],int mat[10][100][100],int n)
{
    for(i=0;i<n;i++)
    {
         printf("\nThe %d matrix:\t",i+1);
         for(j=0;j<row[i];j++)
         {
              printf("\n");
              for(z=0;z<colu[i];z++)
              {
                   printf("%d\t",mat[i][j][z]);
              }
         }
    }
}
void displytram(int row[],int colu[],int mat[10][100][100],int n)
{
    for(i=0;i<n;i++)
    {
         printf("\nThe %d transpose matrix:\t",i+1);
         for(j=0;j<row[i];j++)
         {
              printf("\n");
              for(z=0;z<colu[i];z++)
              {
                   printf("%d\t",mat[i][z][j]);
              }
         }
    }
}
void sum(int row[],int colu[],int mat[10][100][100],int n)
{
    if(row[n-1]!=row[n-2] || colu[n-1]!=colu[n-2])
    {
              printf("\nMatrixs must be equal\n");
    }
  else{
       int sum_row=row[0];
  int sum_colu=colu[0];
  int sum_mat[10][100][100];
  for(j=0;j<sum_row;j++)
  {
      for(z=0;z<sum_colu;z++)
      {
          for(i=0;i<n;i++)
          {
               sum_mat[0][j][z]+=mat[i][j][z];
          }
      }
  }
  displymat(row,colu,sum_mat,1);
 }
}
void multiply(int row[],int colu[],int mat[10][100][100],int n)
{
    if(colu[n-1]!=row[n-2])
    {
       printf("\nCan't multiply");
    }
    else
    {
       int a=1;
       int res_row[a];
       int res_colu[a];
       res_row[a]=row[1];
       res_colu[a]=colu[2];
       int res_mul[10][100][100];
       for(j=0;j<res_row[a];j++)
       {
           for(z=0;z<res_colu[a];z++)
           {
              res_mul[a][j][z]=0;
                //if(n<2)
               // {
                       for(k=0;k<res_colu[a];k++)
                       {
                          res_mul[a][j][z]+=mat[1][j][k]*mat[2][k][z];

                       }
                //}
                /*else{
                        for(k=0;k<res_colu[a];k++)
                        {
                            for(i=3;i<n;i++)
                            {
                                res_mul[a][j][z]+=mat[i][j][k]*mat[i+1][k][z];
                            }
                        }
                }*/
           }
       }
        displymat(res_row,res_colu,res_mul,1);
    }
}
