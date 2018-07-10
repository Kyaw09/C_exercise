#include<stdio.h>
struct student
{
   union
   {
     int roll_no;
     char name[20];
   };
   int marks;
};
int main()
{
  struct student stud1;

  printf("You can enter your roll no and your name");
  printf("\nDo you want to enter your name?(Y||N):\t");
  char choice;
  scanf("%c",choice);
  if(choice=='y' || choice=='Y')
  {
     printf("\nEnter your name:\t");
     scanf("%s",stud1.name);
  }
  else
  {
    printf("\nEnter your roll no:\t");
    scanf("%d",&stud1.roll_no);
  }
  printf("\nEnter your marks:\t");
  scanf("%d",&stud1.marks);
  printf("\n*********Result Details***********");
  if(choice=='y' || choice=='Y')

    printf("\nName:\t %s",stud1.name);

  else

    printf("\nRoll No:\t %d",stud1.roll_no);

  printf("\nYour Marks:\t %d",stud1.marks);
  return 0;
}
