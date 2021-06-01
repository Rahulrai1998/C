#include<stdio.h>
int main()
{
	long int fact = 1 , num , i = 1; 
	scanf("%ld",&num);
	while(i++ != num) fact = i * fact ;
	printf("%ld",fact);
	return 0;
}
