// check entered string as it is embedded in the given array of pointers to string

#include<stdio.h>
#include<string.h>
void checkEmbedded(char *[] , char* , int);
int main()
{
	char *str[] = {
		"Hello buddy" , 
		"How are you",
		"My self Rakesh"
			};
	char s[10];
	gets(s);
	checkEmbedded(str , s , 3);
	return 0;
}
void checkEmbedded(char *str[] , char *p , int n)
{
	int i , flag = 0 ;
	for(i=0;i<n;i++)
	{
		if(strcmp(p , str[i])==0)
		{
			printf("Embedded\n");
			flag = 1;
			break;
		}
	}
	if(flag==0) printf("NOT EMBEDDED\n");
	return ;
}
