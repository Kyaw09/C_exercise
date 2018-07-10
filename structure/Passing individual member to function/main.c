#include <stdio.h>
#include <stdlib.h>


    typedef struct point
    {
       int x;
       int y;
    }point;
    point p1={2,3};
    int display(int,int);
    int main()
    {
      display(p1.x,p1.y);
      return 0;

    }
    int display(int a,int b)
    {
     printf("The coordinate ot the point is:\t%d %d",a,b);
    }


