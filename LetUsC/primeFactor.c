#include<stdio.h>
void getPrimeFactors(int);
int main()
{
	int num ;
	scanf("%d",&num);
	getPrimeFactors(num);
	return 0;
}
void getPrimeFactors(int a)
{
	int i=2;  
	while(a>1)
	{
		while(a%i==0)
		{
			printf("%d ",i);
			a/=i;

		}
		i++ ; 
		
	}
	return;
}



