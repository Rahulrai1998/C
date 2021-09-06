#include<stdio.h>
int getTranspose(int[][4] , int , int);
int main()
{
	int a[4][4];
	int i , j ; 
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++) scanf("%d",&a[i][j]);

	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++) printf("%d ",a[i][j]);
		printf("\n");
	}
	
	if(getTranspose(a,4,4)) printf("Symm\n");
	else printf("Non-Sym\n");
	return 0;
}
int getTranspose(int a[][4],int row , int col)
{
	int trans[4][4];
	int i,j , *pint;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++) trans[i][j] = a[j][i];
		
	}
	int *p = &trans[0][0];
	for(i=0;i<row*col;i++) printf("%d ",*(p+i));
	int sym = 1 ; 
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{

			if(trans[i][j]!=a[i][j]) return 0 ; 
		}
		
	}
	
	return 1;
}
