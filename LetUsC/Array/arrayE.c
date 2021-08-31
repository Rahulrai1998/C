#include<stdio.h>
int main()
{
	int n ; 
	scanf("%d",&n);
	int a[n];
	int i , j; 
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i = 0 , j = n-1 ; i <= j ; i++ , j--)
	{
		if(a[i]==a[n-1-i]) printf("yes ");
		else printf("No ");
	
	}
	return 0;
}
