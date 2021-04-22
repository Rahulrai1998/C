#include<stdio.h>
#include<math.h>
int main()
{
	float x , y , phi , r ; 
	printf("Enter the coordinates = ");
	scanf("%f%f" , &x,&y);
	r = sqrt(x*x + y*y);
	phi = atan(x/y) ; 
	printf("%f %f", r , phi);
	return 0 ; 
}