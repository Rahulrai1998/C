#include<stdio.h>
void getLeftShift(int [][4] , int);
void getLeftShiftTwo(int * , int , int);
int main()
{
	int a[3][4] ,  b[] = {1 , 2 , 3 , 4 , 5}; 
	int i , j ; 
	for(i=0;i<3;i++)
		for(j=0;j<4;j++) scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++) printf("%d ", a[i][j]);
		printf("\n");
	}
	//getLeftShiftTwo(b , 5 , 2);
	//for(i=0;i<5;i++) printf("%d ", b[i]);
	getLeftShift(a , 2);
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++) printf("%d " , a[i][j]); 
		printf("\n");
	}
	return 0;
}
void getLeftShift(int a[][4] , int k)
{
	int i , j , first , l;
	for(i=0;i<3;i++)
	{
		for(l = 1; l <= k ; l++)
		{
			first = a[i][0] ; 
			for(j=0;j<3;j++)
				a[i][j] = a[i][j+1] ;
			a[i][j] = first; 
		}
		getLeftShiftTwo(a[i][]);
		
	}
	return ;
}
void getLeftShiftTwo(int a[] , int n , int k)
{
	int i , first , j ;
	for(i=1;i<=k;i++)
	{
		first = a[0] ; 
		for(j = 0 ; j<n-1;j++)
			a[j] = a[j+1];
		a[j] = first ; 
	}	
	return ;
}
