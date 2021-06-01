#include<stdio.h>
int main()
{
	int a , countPos=0, countNeg=0, countZero=0 ;
	char check ; 
	do
	{
		scanf("%d",&a);
		if(a==0) countZero++ ; 
		else if(a<0) countNeg++ ; 
		else countPos++;
		fflush(stdin);
		scanf("%c",&check);

	}while(check == 'Y');
	printf("%d positive \n%d negative \n%d zero\n",countPos , countNeg , countZero);
	return 0;
}
