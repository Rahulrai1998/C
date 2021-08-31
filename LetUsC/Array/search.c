#include<stdio.h>
int elmCount(int [],int ,int);
int main()
{
	int a[5];
	int i , j; 
	for(i = 0 ; i < 5 ; i++ ) scanf("%d",&a[i]);
	scanf("%d",&j);
	int count = elmCount(a,j,5);
	if(count != -1) printf("%d appeared %d times\n" , j , count);
	else printf("Element is absent in the array");


	return 0 ; 
}
int elmCount(int a[] , int key , int n)
{
	int i , j = -1 , count = 0 ; 
	for(i = 0 ; i<n ; i++)
	{
		if(a[i] == key) j = ++count; 
	}
	return j ; 
}
