#include<stdio.h>
int main()
{
	int a , b , c ; 
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c) printf("%d is the smallest one\n",a);
		else printf("%d is the smallest",c);
	}
	else{
		if(b<c) printf("%d is the smallest",b);
		else printf("%d is the smallest",c);
	}
	return 0 ; 
}
