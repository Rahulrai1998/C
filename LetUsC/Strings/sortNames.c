// Program to sort a set of names stored in an array in alphabetical order

#include<stdio.h>
#include<string.h>
int main()
{
	char *str[] = {"Zeenz","Zeenb","Zeena","Zeenc"};
	int i , j;
	char *temp ;  
	for( i =0 ; i<3;i++)
	{
		for(j = i+1 ; j<4 ; j++ )
		{
			if(strcmp(str[i] , str[j]) > 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	for(i=0;i<4;i++) printf("%s ",str[i]);
	return 0;
}