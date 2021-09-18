#include<stdio.h>
void extrctStr(char* , char* , int);
int main()
{
	char s1[50] , s2[50];
	gets(s1);
	extrctStr(s1 , s2 , 4);
	puts(s2);	
	return 0;
}
void extrctStr(char *a , char *b , int pos)
{
	int i = pos - 1 ;
	while(a[i]!='\0' && a[i]!=' ')
		*b++ = a[i++]; 
	*b = '\0';
	return ;
}