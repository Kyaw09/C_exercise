#include <stdio.h>
#include <stdlib.h>
int square(int);

int main()
{
    printf("Hello world!\n");
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Square is:\t%d",square(x));
    return 0;
}
int square(int y)
{
  return y*y;

}
