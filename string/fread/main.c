#include <stdio.h>
#include <stdlib.h>
struct Student_Data
{
    int acc;
    char name[100];
    int balance;
}data;
int main()
{
    printf("Hello world!\n");
    FILE *kyaw;
    kyaw=fopen("Student-Data.dat","r");
    if(kyaw==NULL)
    {
       printf("\n There is no exist");
    }
    else{
       fread(&data,sizeof(struct Student_Data),1,kyaw);
       while(!feof(kyaw))
       {
          printf("\n%d %s %d",data.acc,data.name,data.balance);
          fread(&data,sizeof(struct Student_Data),1,kyaw);
       }
    }
    return 0;
}
