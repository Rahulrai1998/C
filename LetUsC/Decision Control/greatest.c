#include<stdio.h>
int main()
{
	int a , b , c ; 
	scanf("%d%d%d",&a,&b,&c);
	((a>b)?((a>c)?printf("%d\n",a):printf("%d\n",c)):((b>c)?printf("%d\n",b):printf("%d\n",c)));
	return 0;}
