#include<stdio.h>
int main()
{
	char c ; 
	while(1)
	{
          		scanf("%c",&c);
		printf("ASCII of %c is %d\n",c,c);
		fflush(stdin); //clear the buffer
	}
	return 0 ;
}
