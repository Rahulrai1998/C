#include<stdio.h>
void getProduct(int a[][3] , int b[][3] , int p[][3] , int ar , int ac , int br , int bc);
int main()
{
	int ar , ac , br , bc , i ,j;
	scanf("%d%d%d%d",&ar,&ac,&br,&bc);
	if(ac != br) {printf("Product isn't possible\n");return 0;}
	int a[ar][ac]; 
	int b[br][bc] ; 
	int pr[ar][bc] ;
	for(i=0;i<ar;i++)
		for(j=0;j<ac;j++) {scanf("%d",&a[i][j]);}
	for(i=0;i<br;i++)
		for(j=0;j<bc;j++) {scanf("%d",&b[i][j]);}
	getProduct(a , b , pr , ar , ac , br , bc);
	for(i=0;i<ar;i++){
		for(j=0;j<bc;j++) printf("%d ",pr[i][j]);
		printf("\n");
		}
	return 0;
}
void getProduct(int a[][3] , int b[][3] , int p[][3] , int ar , int ac , int br , int bc)
{
	int i , j , k , sum = 0 ; 	
	for(i=0;i<ar;i++)
	{
		for(j=0;j<bc;j++) 
		{
			for(k=0;k < br ; k++)
				sum+= a[i][k] * b[k][j] ; // k is used to traverse along columns of a[] and the rows of b[] , while multuplying and adding to get the particular resultant element
			p[i][j] = sum ; sum = 0;
		}
	}
	return ;
}