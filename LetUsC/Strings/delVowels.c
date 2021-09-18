// Delete all the vowels from the sentence

#include<stdio.h>
#include<string.h>
void delVowels(char *);
int main()
{
	char str[80];
	gets(str);
	puts(str);
	delVowels(str);
	puts(str);
	return 0;
}
void delVowels(char *str)
{ 
	char vowels[10] = "aeiouAEIOU";
	int i , j , k; 
	for(k = 0 ; k < strlen(str);k++)
	{
		for(i = 0 ; i<10;i++)
		{
		
			if(str[k] == vowels[i])
			{
				for(j = k ; j<strlen(str);j++) str[j] = str[j+1];
				break;	
			}
		}
			
	}

	return;
}