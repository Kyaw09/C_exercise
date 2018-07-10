#include<stdio.h>
int main()
{
    struct NAME
    {
        char first_name[20];
        char mid_name[20];
        char last_name[10];
    };
    struct Date
    {
        char day[20];
        char month[20];
        char year[10];
    };
    struct subject
    {
       int e;
       int m;
       int c;
    };
    typedef struct student
    {
       int roll_no;
       struct NAME name[50];
       char sex[50];
       struct Date Date_Birth[50];
       struct subject marks;

    }student;
    student stud[50];
    int i,n;
    printf("Enter the student number:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

          printf("\nEnter Student Roll No:\t");
          scanf("%d",&stud[i].roll_no);
          printf("Enter Student name:\t");
          scanf("%s %s %s",stud[i].name[50].first_name,stud[i].name[50].mid_name,stud[i].name[50].last_name);
          printf("Enter Student Sex;\t");
          scanf("%s",stud[i].sex);
          printf("Enter Student Date Of Birth:\t");
          scanf("%s %s %s",stud[i].Date_Birth[50].day,stud[i].Date_Birth[50].month,stud[i].Date_Birth[50].year);
          printf("Enter Student Marks for three different subject:\t");
          scanf("%d %d %d",&stud[i].marks.e,&stud[i].marks.m,&stud[i].marks.c);
          printf("\n***********Student Details No.%d***********",i+1);
          printf("\nRoll No:\t%d",stud[i].roll_no);
          printf("\nStudent Name:\t%s %s %s",stud[i].name[50].first_name,stud[i].name[50].mid_name,stud[i].name[50].last_name);
          printf("\nStudent Sex:\t%s",stud[i].sex);
          printf("\nStudent Date Of Birth:\t%s %s %s",stud[i].Date_Birth[50].day,stud[i].Date_Birth[50].month,stud[i].Date_Birth[50].year);
          printf("\nStudent Marks of Three Different Subject:\t%d %d %d",stud[i].marks.e,stud[i].marks.m,stud[i].marks.c);
          int sum_mark;
         sum_mark=stud[i].marks.e+stud[i].marks.m+stud[i].marks.c;


         if(sum_mark<=120)
         {
              printf("\nStudent Name:\t%s %s %s",stud[i].name[50].first_name,stud[i].name[50].mid_name,stud[i].name[50].last_name);
         }

      }

      return 0;
}

















