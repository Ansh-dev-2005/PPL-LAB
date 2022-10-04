#include <stdio.h>
int main()
{
	int i,A[10],sum=0;
	printf("Enter the no");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
		sum=sum+A[i];
	}
	printf("Sum is %d ",sum);
}
