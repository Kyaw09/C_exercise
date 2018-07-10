#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int account;
    char name[100];
    int password;
    FILE *ptr;
    ptr=fopen("wri.dat","w");
    if(ptr==NULL)
    {
      printf("\nCan't open file");
    }
    else
    {
      printf("\nThere is a file");
      printf("\nEnter account:\t");
      scanf("%d",&account);
      printf("\nEnter name");
      scanf("%s",name);
      printf("\nEnter password:\t");
      scanf("%d",&password);
      fprintf(ptr,"%d \n %s \n %d\n",account,name,password);
      //fprintf(ptr,"Hello");
      fclose(ptr);
      //fprintf(wr,"account:\t%d \n name:\t %s \n password:\t %d\n",account,name,password);
    }
     //fprintf(wr,"account:\t%d \n name:\t %s \n password:\t %d\n",account,name,password);
    //fclose(wr);
    return 0;
}
