// DEBUG DEBUG DEBUG DEBUG
#include<stdio.h>
struct student
{
	int roll;
	char name; 
	char depart;
	char course;
	int year;
};
void printNames(int , struct student*);
void getData(int,struct student* );
void linkfloat();
int main()
{
	struct student class[2];
	int dh ,  y , roll , i ; 
	printf("Enter roll , name , depart , course and year of the student : ");
	for(i=0;i<2;i++) 
	{
		scanf("%d%c%c%c%d",&class[i].roll,&class[i].name,&class[i].depart,&class[i].course,&class[i].year);
		fflush(stdin);
	}
	printf("Enter the year : ");
	fflush(stdin);
	scanf("%d",&y);
	printNames(y , class);
	printf("Enter roll : ");
	fflush(stdin);
	scanf("%d",&roll);
	getData(roll , class);
	return 0;
}
void linkfloat()
{
	float a = 0 ,*b;
	b = &a;
	a = *b;
}
void printNames(int y , struct student *class)
{
	int i , size;
	size  = sizeof(class) / sizeof(class[0]);  
	for(i=0;i<size;i++)
	{
		if(class[i].year == y)  
			printf("%d\n",class[i].name);
	}
	
	return ;
}
void getData(int r , struct student* class)
{
	int i , size ; 
	size = sizeof class / sizeof class[0];
	for(i=0;i<size;i++)
	{
		if(class[i].roll==r)
		{
			printf("Roll : %d \n Name : %c \n Department : %c  \n Course : %c \n Year of joining : %d\n",class[i].roll,class[i].name,class						[i].depart,class[i].course,class[i].year);
			break;
		}
	}

	return ; 
}