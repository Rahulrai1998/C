#include<stdio.h>

int binarySearch(int *  , int , int , int);
int binarySearchRecursive(int * , int , int , int);

int main()
{
	int n , i , key;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	int arr[n] ; 
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the element to search = ");
	scanf("%d",&key);
	int res = binarySearchRecursive(arr , 0 , n-1 , key);
	if(res!=-1)
		printf("%d is at %d index\n",key,res);
	else
		printf("Element not found\n");
	return 0 ; 
}
int binarySearch(int *a , int l , int r , int item)
{
	int mid ; 
	while(l<=r)
	{
		mid = (l+r)/2;
		if(item==a[mid])
			return mid ; 
		if(item < a[mid])
			r = mid - 1 ; 
		else
			l = mid + 1 ; 
	}
	return -1 ; 
}
int binarySearchRecursive(int *a , int l , int r , int item)
{
	int mid ; 
	if(l<=r)
	{
		mid = (l+r)/2 ; 
		if(item == a[mid])
			return mid ; 
		if(a[mid] < item)
			return binarySearchRecursive(a , mid + 1 , r , item);
		return binarySearchRecursive(a , l , mid-1 , item);		
	}
	return -1 ; 
}