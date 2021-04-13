#include<stdio.h>
int getDigitSum(int);
int getDigitSumByRec(int);
int main()
{
	int n , ret , ret_Rec; 
	printf("Enter the number = ");
	scanf("%d" , &n);
	ret = getDigitSum(n) ;
	printf("%d\n",ret); 
	return 0;
 }
int getDigitSum(int n)
{
	int sum = 0 , r; 
	while(n>0)
	{
		r = n%10 ; 
		sum = sum + r ;
		n = n/10 ; 
	}	
	return sum ; 
}

/*
Time-complexity of getDigitSum() : O(logn(10))
*/