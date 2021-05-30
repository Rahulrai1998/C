#include<stdio.h>
int main()
{
	int num , temp , r , sum = 0;
	scanf("%d",&num);
	temp = num ; 
	while(num>0)
	{
		r = num%10 ; 
		sum = sum*10 + r ; 
		num/=10;
	}
	printf("%d\n",sum);
	if(sum==temp) 
		printf("Original and Reversed are equal\n");
	else
		printf("Original and Reversed are nor equal\n");
	return 0;
}
