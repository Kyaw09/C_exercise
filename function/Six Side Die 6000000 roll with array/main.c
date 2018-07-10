#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int face;
     int i,n;

    unsigned int frequency1;
    unsigned int frequency2;
    unsigned int frequency3;
    unsigned int frequency4;
    unsigned int frequency5;
    unsigned int frequency6;



    int A[6]={1,2,3,4,5,6};
    for(i=1;i<=6000000;i++)
    {
      face=1+rand()%6;

        n=A[6];
        if(face==n)
        n++;


    }
     printf("%s %13s\n","Face","frequency");

     printf("1 %13d\n",frequency1);
     printf("2 %13d\n",frequency2);
     printf("3 %13d\n",frequency3);
     printf("4 %13d\n",frequency4);
     printf("5 %13d\n",frequency5);
     printf("6 %13d\n",frequency6);


    return 0;
}
