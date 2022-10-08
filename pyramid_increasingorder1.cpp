#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the Number of Rows")
	scanf("%d",&c);
	for(a=0;a<=c-1;a++)
	{
		for(b=0;b<=a;b++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
	
	
	
	return 0;
	
}
