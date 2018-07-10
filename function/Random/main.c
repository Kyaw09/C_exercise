#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seed;
    printf("Hello world!\n");
    printf("Enter seeds:\t");
    scanf("%d",&seed);
    srand(seed);
	unsigned int i;
	for(i=1;i<=20;i++)
	{
	  printf("%10d",1+(rand()%6));
	  if(i%5==0)
      {
	    puts("");
	  }
    }

    return 0;
}
