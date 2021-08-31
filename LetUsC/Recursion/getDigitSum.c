#include<stdio.h>
int getDigitSum(int);
int main()
{
	int num ; 
	scanf("%d",&num);
	int res = getDigitSum(num);
	printf("%d \n",res);
	return 0;
}
int getDigitSum(int num)
{
	int sum ;
	if(num==0) return 0;
	else
		sum = num%10 + getDigitSum(num/10);
 	return sum;
}


