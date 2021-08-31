#include<stdio.h>
#include<limits.h>

void getSmallest(int* , int);
int main()
{
	int i , n ; 
	scanf("%d",&n);
	int a[n] ; 
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	getSmallest(a , n);
	return 0;
}
void getSmallest(int *a , int n)
{
	int i , s = INT_MAX; 
	for(i = 0 ; i<n ; i++)
	{
		if(a[i]< s) s = a[i] ;
	}
	printf("%d is the smallest element",s);
	return ;

}
