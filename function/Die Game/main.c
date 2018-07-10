#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum Status{Continue,Win,Lost};
int Dieroll(void);

int main()
{
    printf("Hello world!\n");
    int sum;
    int myPoint;
    srand(time(NULL));
    enum Status GameStatus;
    sum=Dieroll();
    int n,i;
    printf("Enter number of Players:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      switch(sum)
      {
       case 7:
       case 11:
               GameStatus=Win;
               break;
        case 2:
        case 6:
        case 12:
                GameStatus=Lost;
        default:
                GameStatus=Continue;
                myPoint=sum;
                printf("My Point is:\t%d",myPoint);
                break;
      }
      while(Continue==GameStatus)
      {
        sum=Dieroll();
        if(sum==myPoint)
        {
          GameStatus=Win;
        }
        else if(7==sum)
        {
          GameStatus=Lost;
        }
      }
      if(GameStatus==Win)
      {
       puts("\nPlayer Win");
      }
      else
      {
       puts("\nPlayer Lost");
      }
    }
      return 0;
}
int Dieroll(void)
{
  int Die1;
  int Die2;
  Die1=1+(rand()%6);
  Die2=1+(rand()%6);
  return Die1+Die2;
}
