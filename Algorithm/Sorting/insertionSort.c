//Insertion Sort

#include<stdio.h>

void insertionSort(int * , int);
int main()
{
	int n , i ;
	printf("Enter the number of Array elements = ");
	scanf("%d" , &n);
	int arr[n];
	for(i = 0 ; i < n ; i++)
		scanf("%d" , &arr[i]); 
	insertionSort(arr , n);
	return(0);
}
void insertionSort(int * arr , int n)
{
	int i , key , j; 
	for(i=1 ; i < n ; i++)
	{
		key = arr[i] ; 
		j = i - 1 ; 
		while(j>=0 && arr[j] > key)
		{
			arr[j+1] = arr[j] ; 
			j-- ; 
		}
		arr[j+1] = key ; 
	}
	for(i=0 ; i < n ; i++)
		printf("%d " , arr[i]);
	return ; 
}
