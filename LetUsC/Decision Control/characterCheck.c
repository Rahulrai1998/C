#include<stdio.h>
int main()
{
	char c ; 
	scanf("%c",&c);
	if((c>=65 && c<=90)) printf("Capital letter\n");
	else if(c>=97 && c<=122) printf("Small Letter\n");
	else if(c>=48 && c<=57) printf("Digits\n");
	else printf("Special Symbols\n");
	return 0 ; 
}
