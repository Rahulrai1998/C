// Delete all the occurrences of 'the' in the String

#include<stdio.h>
#include<string.h>
void delThe(char *);
int main()
{
	char str[80];
	gets(str);
	puts(str);
	delThe(str);
	puts(str);
	return 0;
}
void delThe(char *str)
{
	char the[] = "the";
	int i , j , k , flag; 
	for(i=0;i<strlen(str);i++)
	{
		k = i ; flag = 1 ;
		for(j=0;j<strlen(the);j++)
		{
			if(str[k++]!=the[j])
			{
				flag = 0 ; 
				break;
			} 
		}
		if(flag == 1 && str[i+3] == ' ')
		{
			for(j=i;j<strlen(str);j++) str[j] = str[j+4];
		}
		else if(flag == 1 && str[i+3] != ' ')
		{
			for(j=i;j<strlen(str);j++) str[j] = str[j+3];
		} 
	}
	return ;
}