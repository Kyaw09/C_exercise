#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    struct complex
    {
      int real;
      int img;
    }c1,c2,sum_c,sub_c;

    int option;

    do
    {

           printf("\n********Main Menu********");
           printf("\n1.Read the two complex number");
           printf("\n2.Display the two complex number ");
           printf("\n3.Add two complex number");
           printf("\n4.Subtract two complex number");
           printf("\nEnter your option");
           scanf("%d",&option);
           switch(option)
           {
              case 1:printf("\nEnter the first complex number");
                     scanf("%d %d",&c1.real,&c1.img);
                     printf("\nEnter the second complex number");
                     scanf("%d %d",&c2.real,&c2.img);
                     break;
              case 2:printf("\nThe first complex number is %d+%d",c1.real,c1.img);
                     printf("\nThe second comples number is %d+%d",c2.real,c2.img);
                     break;
              case 3:sum_c.real=c1.real+c2.real;
                     sum_c.img=c1.img+c2.img;
                     printf("\nThe sum of the two complex number is %d+%d",sum_c.real,sum_c.img);
                     break;
              case 4:sub_c.real=c1.real-c2.real;
                     sub_c.img=c1.img-c2.img;
                     printf("\nThe subtract of the two comples number is %d+%d",sub_c.real,sub_c.img);
                     break;



           }




    }while (option!=5);

    printf("Exit");
    return 0;
}
