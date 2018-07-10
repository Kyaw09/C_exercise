#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    unsigned int seed;
    unsigned int i,n,j;
    printf("Enter number of seeds:\t");
    scanf("%u",&n);
    for(j=1;j<=n;j++)
    {

      printf("\nEnter seeds:\t");
      scanf("%u",&seed);
      srand(seed);
      for(i=1;i<=10;i++)
      {
         printf("%u",1+(rand()%6));
         if(i%5==0)
         {
            puts("");
         }

       }
     }


    return 0;
}
