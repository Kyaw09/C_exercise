#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    typedef struct
    {
        char first_name[20];
        char last_name[20];
    }NAME;

    typedef struct
    {
       int year;
       char major_name;
       int serial_number;

    }roll;
    typedef struct
    {
      int day;
      int month;
      int born_year;

    }Date;
    typedef struct student
    {
      roll roll_no;
      NAME name;
      Date DOB;
      int fees;
    }student;

      struct student stud1;

     int i;
     for(i=5000;i!=0;i++)
     {
     printf("\nEnter the roll number");
     scanf("%d %s_%d",&stud1.roll_no.year,&stud1.roll_no.major_name,&stud1.roll_no.serial_number);
     printf("Enter student name");
     scanf("%s %s",stud1.name.first_name,stud1.name.last_name);
     printf("Enter your DOB");
     scanf("%d_%d_%d",&stud1.DOB.day,&stud1.DOB.month,&stud1.DOB.born_year);
     printf("Enter fees");
     scanf("%d",&stud1.fees);
     printf("\n******Student Detail*******");
     printf("\nROLL NO:%d %d_%d",stud1.roll_no.year,stud1.roll_no.major_name,stud1.roll_no.serial_number);
     printf("\nName:%s %s",stud1.name.first_name,stud1.name.last_name);
     printf("\nDOB:%d %d %d",stud1.DOB.day,stud1.DOB.month,stud1.DOB.born_year);
     printf("\nFees:%d",stud1.fees);
     }

    return 0;
}
