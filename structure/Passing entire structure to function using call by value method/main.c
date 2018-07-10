#include<stdio.h>
typedef struct
{
   int x;
   int y;
}point;
int display(point);
int main()
{
  point p1={2,3};
  display(p1);
  return 0;
}
int display(point p)
{
  printf("The coordinate of the point is:\t%d %d",p.x,p.y);

}
