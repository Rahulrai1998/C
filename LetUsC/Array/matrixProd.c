#include<stdio.h>
void getSumAndProd(int [][3] , int [][3] , int [][3] , int[][3] , int n);
int main()
{
	int mat1[3][3] , mat2[3][3] , sum[3][3] , prod[3][3] ;
	int i , j;
	for(i=0;i<3;i++) 
		for(j=0;j<3;j++)
			scanf("%d",&mat1[i][j]);
	
	for(i=0;i<3;i++) 
		for(j=0;j<3;j++)
			scanf("%d",&mat2[i][j]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d " , mat1[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",mat2[i][j]);
		printf("\n");
	}
	printf("\n");
	getSumAndProd(mat1 , mat2 , sum , prod , 3);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",sum[i][j]);
		printf("\n");
	}
	printf("\n");
	return 0;	
}
void getSumAndProd(int mat1[][3] , int mat2[][3] , int sum[][3] , int prod[][3] , int n)
{
	int i , j  , k;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			sum[i][j] = mat1[i][j] + mat2[i][j] ; 
	return ;
}