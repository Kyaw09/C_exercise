#include<stdio.h>
typedef union point
{
  int x,y;


}point;
int main()
{


      point p[3];
      p[0].x=3;
      printf("\nThe coordinate of point  is:\t %d",p[0].x);
      p[0].y=4;
      printf("\nThe coordinate of point is:\t %d",p[0].y);


      p[1].x=5;
      printf("\nThe coordinate of point is:\t %d",p[1].x);
      p[1].y=7;
      printf("\nThe coordinate of point is:\t %d",p[1].y);
       p[2].x=88;
       printf("\nThe coordinate of point is:\t %d",p[2].x);
       p[2].y=33;
        printf("\nThe coordinate of point is:\t %d",p[2].y);

  return 0;
}
