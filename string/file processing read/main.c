#include<stdio.h>
struct Student_data
{
  int account;
  char name[200];
  int password;
}stud[100];
int main(void)
{
  FILE *kyaw;
  kyaw=fopen("data.text","r");
  if(kyaw==NULL)
  {
    printf("\nCan't open file");
  }
  else{
    printf("\n open file");
    int i,n;
    printf("\nEnter student number:\t");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
     printf("%s\n%d\n %s\n %d\n","\n*******MAIN MENU********","Account number:\t","NAME:\t","Password:\t");
     fscanf(kyaw,"%s");
     fscanf(kyaw,"%d",&stud[i].account);
     fscanf(kyaw,"%s",stud[i].name);
     fscanf(kyaw,"%d",&stud[i].password);
     while(!feof(kyaw))
     {
        printf("%d\n %s\n %d\n",stud[i].account,stud[i].name,stud[i].password);
        fscanf(kyaw,"%d\n %s\n %d\n",&stud[i].account,stud[i].name,&stud[i].password);
     }
   }
 }
  fclose(kyaw);
}
