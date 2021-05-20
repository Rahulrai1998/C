// Merge Sort 
#include<stdio.h>
void mergeSort(int* , int , int);
void merge(int* , int , int , int);
void display(int * , int);
int main()
{
	int n , i ; 
	printf("Enter the length = ");
	scanf("%d",&n);
	int arr[n] ; 
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	display(arr , n);
	mergeSort(arr , 0 , n-1);
	display(arr , n);
	return 0 ; 
}
void display(int *a , int n)
{
	int i ; 
	for(i = 0 ; i < n ; i++)
	{
		printf("%d " , a[i]);
	}
	printf("\n");
	return ; 
}
void merge(int *a , int l , int m , int r)
{
	int n1 , n2 , k , i, j ;
	n1 = m - l + 1 ; 
	n2 = r - m ; 
	int left[n1] ; 
	int right[n2];
	for(i=0 ; i < n1 ; i++)
	{
		left[i] = a[l+i] ; 
	}
	for(i=0 ; i < n2 ; i++)
	{
		right[i] = a[m+1+i];
	}
	i = 0 ; j = 0 ; k = l;
	while(i < n1 && j < n2)
	{
		if(left[i] < right[j])
		{
			a[k] = left[i] ; 
			k++ ; i++ ; 
		}
		else
		{
			a[k] = right[j] ; 
			k++ ; j++ ; 
		}
	} 
	while(j < n2)
	{
		a[k] = right[j] ; 
		k++ ; j++ ; 
	}
	while(i < n1)
	{
		a[k] = left[i] ; 
		k++ ; i++ ; 
	}
	return ; 
}
void mergeSort(int *a , int l , int r)
{
	int mid ; 
	if(l<r)
	{
		mid = (l+r)/2 ; 
		mergeSort(a , l , mid);
		mergeSort(a , mid+1 , r);
		merge(a , l , mid , r);
	}
	return ; 
}