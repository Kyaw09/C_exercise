#include<stdio.h>
typedef struct distance
{
  int kms;
  int met;
}distance;
distance d1,d2,d3,d4;
distance sum_distance(distance,distance);
distance sub_distance(distance,distance);
int main()
{
  int option;
  do
  {
    printf("\n*****Main Menu******");
    printf("\n1.Read the two distance in kms and meters ");
    printf("\n2.Display the two distance in kms and meters");
    printf("\n3.Add the two distance in kms and meters");
    printf("\n4.Substrat the two distance in kms and meters");
    printf("\nEnter the option");
    scanf("%d",&option);
    switch(option)
    {
       case 1:printf("Enter the first distance in kms and meters:\t");
              scanf("%d %d",&d1.kms,&d1.met);
              printf("Enter the second distance in kms and meters:\t");
              scanf("%d %d",&d2.kms,&d2.met);
              break;
       case 2:printf("\nThe first distance in kms and meters is:\t%d %d",d1.kms,d1.met);
              printf("\nThe second distance in kms and meters is:\t%d %d",d2.kms,d2.met);
              break;
       case 3:d3=sum_distance(d1,d2);
              printf("\nThe sum of the two distance in kms and meters is:\t%dkms  %dmeters",d3.kms,d3.met);
              break;
       case 4:d4=sub_distance(d1,d2);
              printf("\nThe subtract of the two distance in kms and meters is:\t%dkms  %dmeters",d4.kms,d4.met);
              break;


    }
  }while(option<5);
  printf("Exit");
  return 0;

}
distance sum_distance(distance d1,distance d2)
{
  distance sum;
  sum.met=d1.met+d2.met;
  sum.kms=d1.kms+d2.kms;
  while(sum.met>=1000)
  {
     sum.met= sum.met % 1000;
     sum.kms += 1;
  }
  return sum;
}
distance sub_distance(distance d1,distance d2)
{
  distance sub;
  distance sum;
  if(d1.kms>d2.met)
  {
    sub.met=d1.met-d2.met;
    sub.kms=d1.kms-d2.kms;
  }
  else
  {
    sub.met=d2.met-d1.met;
    sub.kms=d2.kms-d1.kms;
  }
  if(sub.met< 0)
  {
    sub.kms=sum.kms-1;
    sub.met=sum.met+1000;
  }
  return sub;
}
