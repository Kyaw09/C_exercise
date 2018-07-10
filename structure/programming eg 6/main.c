#include <stdio.h>
#include <stdlib.h>

struct student
{
  int roll_no;
  char name[20];
  char course[20];
  int fees;

};


int main()
{

     struct student stud1,*ptr_stud1;
     ptr_stud1=&stud1;



     printf("\nEnter the Roll Number:\t");
     scanf("%d",&ptr_stud1->roll_no);
     printf("\nEnter student name:\t");
     scanf("%s",ptr_stud1->name);
     printf("\nEnter student course:\t");
     scanf("%s",ptr_stud1->course);
     printf("\nEnter fees");
     scanf("%d",&ptr_stud1->fees);

     printf("\n********Main Menu*********");

        printf("\nRoll No:\t %d",ptr_stud1->roll_no);
        printf("\nStudent Name:\t %s",ptr_stud1->name);
        printf("\nCourse:\t %s",ptr_stud1->course);
        printf("\nFees:\t %d",ptr_stud1->fees);



  return 0;


}
