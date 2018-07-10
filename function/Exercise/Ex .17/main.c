#include<stdio.h>
int multiple(int,int);
int main()
{
  int i,x,y;
  printf("Enter two integers:\t");
  scanf("%d %d",&x,&y);
  for(i=1;i<3;i++)
  {
  if(multiple(x,y)){
  printf("%d is a multiple of %d\n\n",y,x);
  }
  else{
    printf("%d is not a multiple of %d \n\n",y,x);
  }
  }
  return 0;
}
int multiple(int a,int b)
{
    return !(b%a);
}
