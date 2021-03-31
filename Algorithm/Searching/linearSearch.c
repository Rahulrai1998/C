// Linear Search
#include<stdio.h>
int linearSearch(int * , int , int);
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
	res = linearSearch(arr , n , search);
	if(res!= -1)
		printf("%d is at %d index\n",search,res);
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