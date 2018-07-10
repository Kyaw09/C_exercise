#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int x,y,z;
    for(x=0;x<10;x++)
    for(y=0;y<10;y++)
    for(z=0;z<10;z++)
    if(2*x+3*y-4*z == -3) // if 7 = true then do 8, else go to 10
    if(4*x-2*y+z == 6) // if 8 = true then do 9
    if(x-3*y-2*z == -15) // if 9 = true then print x, y, z
    printf("x=%d\n y=%d\n z=%d\n",x,y,z);
    return 0;
}
