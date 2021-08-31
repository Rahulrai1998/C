#include<stdio.h>
int getSumRec(int);
int main()
{
	int num ; 
	scanf("%d",&num);
	printf("%d",getSumRec(num));
	return 0;
}
int getSumRec(int n)
{
	 
	if(n==1) return n; 
	else return(n+getSumRec(n-1));
}



