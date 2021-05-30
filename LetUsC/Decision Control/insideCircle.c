#include<stdio.h>
#include<math.h>
int main()
{
	int cen_x , cen_y , x , y , rad , dis; 
	scanf("%d%d%d%d%d",&cen_x , &cen_y , &rad , &x , &y);
	dis = sqrt(pow((cen_x - x),2) + pow((cen_y-y),2));
	if(dis<=rad) printf("Inside\n");
	else printf("Outside\n");

	return 0;
}
