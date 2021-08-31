#include<stdio.h>
void getBinary(int);
int getBinaryRec(int);
int main()
{
	int n ; 
	scanf("%d",&n);
	getBinary(n);
	printf("\n");
	printf("%d",getBinaryRec(n));
	return 0;
}
void getBinary(int n)
{
	int bin[100] ; 
	int i=0,j;
	while(n!=0)
	{
		bin[i++] = n%2 ; 
		n/=2;

	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",bin[j]);
	}
	return;
}
int getBinaryRec(int n)
{
	if(n==0) return 0; 
	else return(n%2 + 10*getBinaryRec(n/2));

}

