#include <stdio.h>
#include <stdlib.h>

int main()
{
   //printf("Hello world!\n");
    int account;
    char name[100];
    int password;
    FILE *ptr;
    ptr=fopen("wri.dat","r");
    if(ptr==NULL)
    {
       printf("Can't open file\n");
    }
    else
    {
       // printf("%s","name:\t");
       //fscanf(wr,"%d %s %d",&account,name,&password);
       //rewind(wr);
        //fscanf(wr,"%d  %s  %d",&account,name,&password);
        //printf("%d  %s  %d",account,name,password);
        //fscanf(ptr,"%d \n %s \n %d",&account,name,&password);
        //fscanf(ptr,"%s",name);
        //while(feof(ptr))
        //{
            //fscanf(ptr,"%s",name);
            //printf("%s",name);
        //}
       fscanf(ptr,"%d \n %s \n %d",&account,name,&password);
       printf("Account:\t%d \nName:\t %s \nPassword:\t %d",account,name,password);
        fclose(ptr);//printf("")
    }
    return 0;
}
