// Linear Search
#include<stdio.h>
int linearSearch(int * , int , int);
int linearSearchRecursive(int* , int , int , int);
int main()
{
	int n,i , res , search; 
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	int arr[n] ; 
	for(i=0 ; i<n;i++)
		scanf("%d" , &arr[i]);
	printf("Enter the key to search = ");
	scanf("%d" , &search);
	printf("\nBy Iterative\n\n");
	res = linearSearch(arr , n , search);
	if(res!= -1)
		printf("%d is at %d index\n",search,res);
	else
		printf("Element not present\n");

	printf("\nBy Recursive\n\n");
	
	res = linearSearchRecursive(arr , 0 , n-1 , search);
	if(res!=-1)
		printf("%d is at %d index\n",search,res);
	else
		printf("Element not present\n");
	return 0 ; 
	
}
int linearSearch(int * a , int n , int key)
{
	int i ; 
	for(i=0 ; i<n ;i++)
	{
		if(a[i]==key)
			return i ; 
	}
	return -1 ; 
} 
int linearSearchRecursive(int *a , int l ,int r ,int x)
{
	if(r<l)
		return -1;
	if(a[l]==x)
		return l ; 
	if(a[r]==x)
		return r ; 
	return linearSearchRecursive(a , l+1 , r-1 , x);
}