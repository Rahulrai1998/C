#include<stdio.h>
void modify(int* , int);
int main()
{
	int n , i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	modify(a,n);
	for(i=0;i<n;i++) printf("%d ", a[i]);

	return 0;
}
void modify(int *a , int n)
{
	int i ; 
	for(i = 0 ; i<n ; i++) a[i] = 3*a[i];
	return;
}
