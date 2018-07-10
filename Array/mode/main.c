#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
     printf("Hello world!\n");
    int n,i;
    printf("Enter the number of arrays");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        //printf("\nEnter value of each arrays:\t");
        //scanf("%d",&v);
        printf("\nA[%d]=",i);
        scanf("%d",&A[i]);
    }
    printf("\nThe elements of arrays:\t");
    for(i=0;i<n;i++)
    {
       printf("%d \t",A[i]);
    }
    int large=A[0];
    for(i=0;i<n;i++)
    {
       if(A[i]>large)
       {
           large=A[i];
       }
    }
    printf("\n large number is %d",large);
    //scanf("%d",&large);
    //n=large;
    int count[9]={0};
    for(i=0;i<n;i++)
    {
        int s=A[i];
        count[s-1]=count[s-1]+1;
    }
    for(i=0;i<large;i++)
    {
       printf("\n%d count is %d\n",(i+1),count[i]);
    }
    int max = count[0];
	int max_index = 0;
	for(int i=1;i<large;i++)
	{
		if(count[i]>max)
		{
			max = count[i];
			max_index = i;
		}
	}
    printf("max value is %d\n",max);
	printf("mode value is %d\n",(max_index+1));
    return 0;
}
