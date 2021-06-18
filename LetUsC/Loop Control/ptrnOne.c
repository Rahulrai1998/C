#include<stdio.h>
int main()
{
	int i , j , n;
	n = 1;

	for(i=1;i<=4;i++)
	{
		for(j=4-i;j>0;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
	return 0 ; 
}

