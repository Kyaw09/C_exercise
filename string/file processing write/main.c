#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 struct Student_data
 {
   int account;
   char name[200];
   int password;
 }stud[100];
int main(void)
{
  FILE *kyaw;
  kyaw=fopen("data.text","w");
  if(kyaw==NULL)
  {
     printf("Can't open file:\n");
  }
  else{
    int n,i;
    printf("Enter number of student:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter account number:\t");
        scanf("%d",&stud[i].account);
        printf("Enter your name:\t");
        scanf("%s",stud[i].name);
        printf("Enter your password:\t");
        scanf("%d",&stud[i].password);
    }
    printf("\n***********Main Menu***********\n");
    for(i=0;i<n;i++)
    {
       printf("\nAccount number:\t%d",stud[i].account);
       printf("\n NAME:\t%s",stud[i].name);
       printf("\n Password:\t %d",stud[i].password);
       fprintf(kyaw,"***********Main Menu***********\n");
       fprintf(kyaw,"\nAccount number:\t%d",stud[i].account);
       fprintf(kyaw,"\n NAME:\t%s",stud[i].name);
       fprintf(kyaw,"\n Password:\t %d",stud[i].password);
    }
  fclose(kyaw);
  }
  //int i,n;
  //printf("Enter number of student:\t");
  //scanf("%d",&n);
  /*printf("\n***********Main Menu***********\n");
  for(i=0;i<n;i++)
  {
     printf("Account number:\t%d",stud[i].account);
     printf("\n NAME:\t%s",stud[i].name);
     printf("\n Password:\t %d",stud[i].password);
     fprintf(kyaw,"***********Main Menu***********\n");
     fprintf(kyaw,"Account number:\t%d",stud[i].account);
     fprintf(kyaw,"\n NAME:\t%s",stud[i].name);
     fprintf(kyaw,"\n Password:\t %d",stud[i].password);
  }
  fclose(kyaw);*/
}
