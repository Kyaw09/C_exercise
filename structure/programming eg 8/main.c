#include<stdio.h>
struct student
{
   int roll_no;
   char name[20];
   char course[20];
   int fees;
};

int display(struct student*);

int main()
{
  struct student *ptr;
  ptr=(struct student *)malloc(sizeof(struct student));
  printf("Enter Roll No:\t");
  scanf("%d",&ptr->roll_no);
  printf("Enter student name:\t");
  scanf("%s",ptr->name);
  printf("Enter student course");
  scanf("%s",ptr->course);
  printf("Enter fees");
  scanf("%d",&ptr->fees);
  display(ptr);
  return 0;
}
int display(struct student *ptr)
{
  printf("********Student Detail*******");
  printf("\nRoll NO :\t%d",ptr->roll_no);
  printf("\nName :\t%s",ptr->name);
  printf("\nEnter Student Course:\t%s",ptr->course);
  printf("\nEnter Student fees:\t%d",ptr->fees);
  return ptr;
}
