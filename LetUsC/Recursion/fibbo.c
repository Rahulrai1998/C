#include<stdio.h>
void getFibbo(int);
void getFibboByRec(int , int ,int ,int);
void getFibboByRecTwo(int);
int main()
{
	int n ; 
	scanf("%d",&n);
	getFibbo(n);
	printf("\n%d %d ",0,1);
	getFibboByRec(n,0,1,3);
	printf("\n%d %d ",0,1);
	getFibboByRecTwo(n-2);
	return 0 ; 
}
void getFibbo(int n)
{
	int i = 0 , j = 1 , k , l;
	printf("%d %d ",i,j);
	for(k = 1 ; k<=n-2 ; k++)
	{
		l = i + j ; 
		i = j ; j = l ; 
		printf("%d ",l);
	}
	return;
}
void getFibboByRec(int n , int j , int k , int i)
{
	// We could have used 'static int' variables instead passing them as arguments 
 
	if(i>n) {return;} 
	else
	{  	
		printf("%d ",j+k);
		i++;
		getFibboByRec(n,k,j+k,i);
	}
	return;
}
void getFibboByRecTwo(int n)
{
	static int i = 0 , j = 1 , k ; 
	if(n==0) return ; 
	else{
		k = i+j ; i = j ; j = k ; 
		printf("%d ",k);
		getFibboByRecTwo(n-1);
		
	}
	return;
}
// HEAD TO GFG FOR MORE SOLUTIONS OF FIBONACCI SERIES
