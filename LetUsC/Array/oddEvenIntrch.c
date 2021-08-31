#include<stdio.h>
int main()
{
	int a[5] ; 
	int i , j; 
	for(i = 0 ; i <5 ; i++) scanf("%d",&a[i]);
	for(i=0;i<5;i++) printf("%d ",a[i]);
	for(i = 0 ; i < 5 ; i++) // i = i+2 , could be used
	{
		if(i%2 != 0) continue ; 
		j = a[i+1];
		a[i+1] = a[i] ; 
		a[i] = j ; 
	} 
	printf("\n");
	for(i=0;i<5;i++) printf("%d ", a[i]);
	return 0;
}