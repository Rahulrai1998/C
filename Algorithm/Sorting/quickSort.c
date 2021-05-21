// Quick sort using divide and conquer method
#include<stdio.h>
int partition(int* , int , int);
void quickSort(int* , int , int);
void display(int* , int);
void swap(int* , int , int);
int main()
{
	int n , i ; 
	printf("Enter the length = ");
	scanf("%d",&n);
	int arr[n] ; 
	for(i=0 ; i<n ; i++)
	{
		scanf("%d" , &arr[i]);
	}
	display(arr , n);
	quickSort(arr , 0 , n-1);
	display(arr , n);
	return 0 ; 
}
void display(int *a , int n)
{
	int i ; 
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return ;
}
void swap(int *a , int i , int j)
{
	int temp = a[i] ; 
	a[i] = a[j] ;
	a[j] = temp ; 
	return ;  
}
int partition(int*a , int l , int r)
{
	int pivot = a[r] ; 
	int i , j ; 
	i = l-1 ; 
	for(j = l ; j < r ; j++)
	{
		if(a[j] < pivot)
		{
			i++ ; 
			swap(a , i , j) ; 
		}
	}
	swap(a , i+1 , r);
	return (i+ 1) ; 

}
void quickSort(int *a , int l , int r)
{
	int pi ; 
	if(l<r)
	{
		pi = partition(a , l , r);
		quickSort(a , l , pi-1);
		quickSort(a , pi+1 , r);
	}
	return ; 
}