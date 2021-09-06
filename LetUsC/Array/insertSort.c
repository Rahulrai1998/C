#include<stdio.h>
void insertionSort(int * , int);
int main()
{
	int i , n ; 
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i = 0 ; i<n ; i++) printf("%d " , a[i]);
	printf("\n");
	insertionSort(a , n);
	for(i=0;i<n;i++) printf("%d ",a[i]);
	return 0 ;
}
void insertionSort(int *a , int n)
{
	int i , j , key;
	for(i = 1 ; i<n;i++)
	{
		key = a[i] ; 
		j = i - 1 ; 
		while(a[j] > key && j>=0)
		{
			a[j+1] = a[j] ; 
			j--;
		}
		a[j+1] = key ; 
	} 
	return;
}
