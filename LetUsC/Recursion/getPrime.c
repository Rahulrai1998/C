#include<stdio.h>
void getPrimeFactors(int,int);
int main()
{
	int num ; 
	scanf("%d",&num);
	getPrimeFactors(num,2);
	return 0;
}
void getPrimeFactors(int num , int i)
{
	if(num==1) return;
	else if(num%i==0)
	{
		printf("%d ",i);
		getPrimeFactors(num/i , i);
	}
	else
		getPrimeFactors(num,++i);


}
