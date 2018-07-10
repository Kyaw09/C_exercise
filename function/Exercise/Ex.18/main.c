#include <stdio.h>
int even(int);
int main()
{
    printf("Hello world!\n");
    int n;
    printf("Enter number:\t");
    scanf("%d",&n);
    if(even(n)==1)
    {
       printf("\nEven");
    }
    else{
        printf("\nNot even");
    }
    return 0;
}
int even(int x)
{
   if(x%2==0)
   {
     return 1;
   }
   else{
     return 0;
   }
}
