#include<stdio.h>
int powerRecursive(int , int);
int main()
{
	int n ; float x , pro = 1; 
	scanf("%f%d",&x,&n);
	if(n==0) pro = 1 ; 
	else if(n>0) while(n-- != 0) pro*=x; 
	else while(n++ != 0) pro*=(1/x); 
	printf("%.3f",pro); 
	return 0 ; 
}
int powerRecursive(int x , int n)
{

	return 0 ; 
}