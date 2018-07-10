#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Hello world!\n");
    int i;
    int A[10];
    for(i=0;i<10;i++)
    {
       printf("%d=",i);
       scanf("%d",&A[i]);
    }

    return 0;
}
