#include<stdio.h>
int main()
{
	int n , r , sum = 0 , temp ; 
	scanf("%d",&n);
	temp = n ;
	while(n>0)
	{
		r = n%10;
		sum = sum + r*r*r ; 
		n/=10 ; 
	}
	if(temp==sum) printf("Armstrong\n");
	else printf("Not an Armstrong\n");
	return 0 ;
}
