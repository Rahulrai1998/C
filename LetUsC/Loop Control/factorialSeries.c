#include<stdio.h>
int main()
{
	float i , sum = 0 , fact , j;
	for(i=1;i<=7;i++)
	{
		fact = 1; 
		for(j=1 ; j<=i ; j++)
		{
			fact = fact * j;

		}
		sum = sum + i/fact;
	}
	printf("%.2f",sum);
	return 0 ; 
}



