// Convert decimal to octal

#include<stdio.h>
int main()
{
	int dec , i = 0 , j; 
	scanf("%d",&dec);
	int octal[100] ;
	while(dec!=0)
	{
		octal[i] = dec%8 ; 
		dec/=8 ; 
		i++ ; 
	}
	for(j = i-1 ; j>=0 ; j--) printf("%d" , octal[j]);
	return 0;
}
