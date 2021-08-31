#include<stdio.h>
void featureCheck(int* , int);
int main()
{
	int a[5];
	int i ; 
	for(i = 0 ; i < 5 ; i++) scanf("%d",&a[i]);
	featureCheck(a,5);
	return 0;
}
void featureCheck(int *a , int n)
{
	int i , z=0 , pos=0 , neg=0 , eve=0 , odd=0 ; 
	for(i=0;i<n;i++)
	{
		if(a[i]>0 && a[i]!=0) pos++;
		else if(a[i]<0 && a[i]!=0) neg++;
		if(a[i]%2==0 && a[i] != 0) eve++;
		else if(a[i]%2!=0 && a[i]!=0)odd++;
		if(a[i]==0) z++;

	}
	printf("Array has %d positives %d negatives %d evens %d odds and %d zeroes",pos,neg,eve,odd,z);
	return ;
}
