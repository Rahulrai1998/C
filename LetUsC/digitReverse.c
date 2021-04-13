#include<stdio.h>
int getReverse(int);
int getReverseByRec(int);
int main()
{
	int n , ret , ret_Rec; 
	printf("Enter the number = ");
	scanf("%d",&n);
	ret = getReverse(n);
	printf("%d",ret);
	return 0;
}
int getReverse(int n)
{
	int sum = 0 , r;
	while(n>0)
	{
		r = n %10 ; 
		sum = sum*10 + r ; 
		n = n/10 ; 
	} 
	return(sum); 
}

/*
Time-complexity of getReverse() : O(logn(10))
Algorithm :-
*/