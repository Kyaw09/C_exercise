#include <stdio.h>
#include <stdlib.h>

struct student
{
  int roll_no;
  char name[20];
  char course[20];
  int fees;

};
 struct student *ptr_stud[50];

int main()
{

  int i,n;

  printf("Enter the student number is:\t");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     ptr_stud[i]=(struct student *)malloc(sizeof(struct student));
     printf("\n Enter the data for student %d ", i+1);
     printf("\nEnter the Roll Number:\t");
     scanf("%d",&ptr_stud[i]->roll_no);
     printf("\nEnter student name:\t");
     scanf("%s",ptr_stud[i]->name);
     printf("\nEnter student course:\t");
     scanf("%s",ptr_stud[i]->course);
     printf("\nEnter fees");
     scanf("%d",&ptr_stud[i]->fees);
  }
     printf("\n********Main Menu*********");
     for(i=0;i<n;i++)
     {
        printf("\nRoll No:\t %d",ptr_stud[i]->roll_no);
        printf("\nStudent Name:\t %s",ptr_stud[i]->name);
        printf("\nCourse:\t %s",ptr_stud[i]->course);
        printf("\nFees:\t %d",ptr_stud[i]->fees);
     }


  return 0;


}

