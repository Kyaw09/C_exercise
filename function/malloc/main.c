#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*ptr,sum=0;
	printf("Enter number of element");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("Enter number of arrays:");
	for(i=0;i<n;i++)
	{
	   scanf("%d",ptr+i);
	   sum+=*(ptr+i);
	}
	printf("Sum=%d",sum);

}
