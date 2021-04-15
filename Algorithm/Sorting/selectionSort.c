// Selection Sort
#include<stdio.h>
void selectionSort(int * , int);
int main()
{
	int n , i ; 
	printf("Enter the number of elements = ");
	scanf("%d" , &n);
	int arr[n] ; 
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	selectionSort(arr , n);
	return 0;
}
void selectionSort(int * a , int n)
{
	int i , j,temp; 
	for(i=0;i<n-1;i++)
	{
		for(j=i+1 ; j<n ;j++)
		{
			if(a[j]<a[i])
			{
				temp = a[i] ; 
				a[i] = a[j] ; 
				a[j] = temp ; 
			}
		}
	}
	for(i = 0  ; i <n ; i++)
		printf("%d ", a[i]); 
	return ;
}
