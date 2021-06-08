// Get the range of a set of numbers

#include<stdio.h>
int main()
{
	int n , i , sml , lrg; 
	scanf("%d",&n);
	int set[n];
	for(i=0;i<n;i++) scanf("%d",&set[i]);
	sml = lrg = set[0];
	for(i=1 ; i<n ;i++)
	{
		if(set[i]<sml) sml = set[i];
		if(set[i]>lrg) lrg = set[i];

	}
	printf("Range of the set = %d",lrg-sml);
	return 0;
}

