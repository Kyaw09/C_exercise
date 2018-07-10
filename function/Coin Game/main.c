#include <stdio.h>
#include <stdlib.h>
enum Status{Win,Lost};
int Coinroll(void);

int main()
{
    unsigned int seed;
    printf("Hello world!\n");
    srand(seed);
    enum Status gameStatus;
    int n,i,face;

    printf("Enter player numbers:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("Enter seeds:\t");
      scanf("%u",&seed);
      face=Coinroll();
      switch(face)
      {
        case 0:
                gameStatus=Win;
                break;
        case 1:
                gameStatus=Lost;
                break;
      }
      if(Win==gameStatus)
      {
        puts("Player win");
      }
      else
      {
        puts("Player lost");
      }
    }
    return 0;
}
int Coinroll(void)
{
   return 1+(rand()%2);
}
