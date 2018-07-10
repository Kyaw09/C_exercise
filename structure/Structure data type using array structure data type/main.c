#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Hello world!\n");
    struct student
    {
      int roll_no;
      char name[80];
      char DOB[80];
      int fees;
    };
    struct student stud[5000];
    int n,i,num,new_roll_no,new_fees;
    char new_name[80],new_DOB[80];
    printf("Enter the student number:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nEnter a roll number:\t");
    scanf("%d",&stud[i].roll_no);
    printf("Enter student name:\t");
    scanf("%s",stud[i].name);
    printf("Enter student DOB:\t");
    scanf("%s",stud[i].DOB);
    printf("Enter fees:\t");
    scanf("%d",&stud[i].fees);
    printf("*********STUDENTS DETAILS %d*********",i+1);
    printf("\nROLL NO:\t%d",stud[i].roll_no);
    printf("\nNAME:\t%s",stud[i].name);
    printf("\nDOB:\t%s",stud[i].DOB);
    printf("\nFees:\t%d",stud[i].fees);
    }
    printf("\nEnter the student number:\t");
    scanf("%d",&n);
    if(n==0)
    {
      printf("Enter the student number whose record has to be edited");
      scanf("%d",&n);
      num-=num;

      printf("Enter new Roll NO:\t");
      scanf("%d",&new_roll_no);
      printf("Enter new name:\t");
      scanf("%s",new_name);
      printf("Enter new DOB:\t");
      scanf("%s",new_DOB);
      printf("Enter new fees:\t");
      scanf("%d",&new_fees);
      stud[num].roll_no=new_roll_no;
      strcpy(stud[num].name,new_name);
      strcpy(stud[num].DOB,new_DOB);
      stud[num].fees=new_fees;
      for(i=0;i<n;i++)
      {
         printf("*********STUDENTS DETAILS %d*********",i+1);
         printf("\nROLL NO:\t%d",stud[i].roll_no);
         printf("\nNAME:\t%s",stud[i].name);
         printf("\nDOB:\t%s",stud[i].DOB);
         printf("\nFees:\t%d",stud[i].fees);
      }

    }
    return 0;
}
