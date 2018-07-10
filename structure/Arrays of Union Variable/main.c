#include<stdio.h>
typedef union point
{
  int x,y;


}point;
int main()
{
  int i;
  point p[3];
  p[0].x=3;
  p[0].y=4;
  p[1].x=5;
  p[1].y=7;
  p[2].x=88;
  p[2].y=33;
  for(i=0;i<3;i++)
  {
      printf("\nThe coordinate of point %d is:\t %d %d",i,p[i].x,p[i].y);
  }
  return 0;
}
