// Prime number between 1 and 300

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=300;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0) break;
				
		}
		if(j>i/2) printf("%d ",i);

	}
	return 0;
}

