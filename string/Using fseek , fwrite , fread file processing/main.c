#include<stdio.h>
struct Student_Data
{
    int acc;
    char name[100];
    int balance;
};
void newacc(FILE *kyaw);
void newedit(FILE *kyaw);
void deteleacc(FILE *kyaw);
void copy(FILE *kyaw);
int main(void)
{
    //struct Student_Data data;
    int option;
    FILE *kyaw;
    kyaw=fopen("Student-Data.dat","r+");
    if(kyaw==NULL)
    {
       printf("\n There is no file");
    }
    else
    {
          do
         {
            printf("\n*************Student Data**************\n");
            printf("Type 1 to add new student account\n");
            printf("Type 2 to edit your student account\n");
            printf("Type 3 to delete your student account\n");
       //printf("Type 4 to copy student data to another file\n");
       //printf("Type 5 to exit\n");
            printf("Enter option:\t");
            scanf("%d",&option);
            switch(option)
            {
              case 1 : newacc(kyaw);
                       break;
              case 2 : //printf("Your account is :\t");
                       newedit(kyaw);
                     break;
            case 3 : printf("Your account is deleted\n");
                     deteleacc(kyaw);
                     break;
            //case 4 : printf("New file is complete copy\n");
                    // copy(kyaw);
                    // break;
            //case 5 : printf("EXIT");
                     //break;
            //default: break;
             }
        }while(option<6);
        fclose(kyaw);
    }
}
void newacc(FILE *kyaw)
{
        struct Student_Data data;
        int account;
        printf("\nEnter new account:\t");
        scanf("%d",&account);
        fseek(kyaw,(account-1)*sizeof(struct Student_Data),SEEK_SET);
        fread(&data,sizeof(struct Student_Data),1,kyaw);
        if(data.acc==0)
        {
            printf("exist\n");
        }
        else
        {
           data.acc=account;
           printf("Enter your name:\t");
           scanf("%s",data.name);
           printf("Enter balance:\t");
           scanf("%d",&data.balance);
           fseek(kyaw,(account-1)*sizeof(struct Student_Data),SEEK_SET);
           fwrite(&data,sizeof(struct Student_Data),1,kyaw);
        }
}
void newedit(FILE *kyaw)
{
      struct Student_Data data;
      int account;
      printf("Enter account to edit :\t");
      scanf("%d",&account);
      fseek(kyaw,(account-1)*sizeof(struct Student_Data),SEEK_SET);
      fread(&data,sizeof(struct Student_Data),1,kyaw);
      if(data.acc==0)
      {
          printf("\nData is emply");
      }
      else
      {
         int b;
         /*char na[100];
         printf("\nEnter account:\t");
         scanf("%d",&n);
         data.acc=n;
         printf("\n Enter name");
         scanf("%s",na);
         data.name=na;*/
         printf("\n Enter balance");
         scanf("%d",&b);
         data.balance+=b;
         fseek(kyaw,(account-1)*sizeof(struct Student_Data),SEEK_SET);
         fwrite(&data,sizeof(struct Student_Data),1,kyaw);
      }
}
void deteleacc(FILE *kyaw)
{
    struct Student_Data data;
    struct Student_Data Black={0,"",0.00};
    int account;
    printf("Enter the account number to delete :\t");
    scanf("%d",&account);
    fseek(kyaw,(account-1)*sizeof(struct Student_Data),SEEK_SET);
    fread(&data,sizeof(struct Student_Data),1,kyaw);
    if(data.acc==0)
    {
         printf("\nNo acc");
    }
    else
    {
         fseek(kyaw,(account-1)*sizeof(struct Student_Data),SEEK_SET);
         fwrite(&Black,sizeof(struct Student_Data),1,kyaw);
    }
}
