#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct que{
	int arr[MAX];
	int front;
	int rear;
}q;

int isEmpty(q *n)
{
	if(n->front == -1) return 1;
	else return 0; 
}
int isFull(q *n)
{
	 if(n->rear == MAX-1) return 1;
	else return 0 ; 
}
void enque(q *n , int key)
{
	if(isFull(n)) return;
	n->rear++;
	n->arr[n->rear] = key;
	if(n->front == -1) n->front++;
	return;
}
int deque(q *n)
{
	if(isEmpty(n)) return -9999;
	
	int item = n->arr[n->front] ; 
	if(n->front == n->rear)
	{
		n->front = n->rear = -1; 
	}
	else n->front++;
	return item;
}


int main()
{
	q qu , *p ; 
	p = &qu;
	p->rear = p->front = -1;
	
	int node , i=0  , j;
	int visited[7] = {0,0,0,0,0,0,0};
	int a[7][7] = {
	{0,1,1,1,0,0,0},
	{1,0,1,0,0,0,0},
	{1,1,0,1,1,0,0},
	{1,0,1,0,1,0,0},
	{0,0,1,1,0,1,1},
	{0,0,0,0,1,0,0},
	{0,0,0,0,1,0,0} 
};
	
	printf("%d ",i); // prints the visited or traversed node
	visited[i] = 1 ; // contains the info of visited node or traversed node
	enque(p , i) ;// nodes are enqued to get explored
	
	while(!isEmpty(p))
	{
		node = deque(p);
		for(j=0;j<7;j++)
		{
			if(a[node][j] == 1 && visited[j] == 0)
			{
				printf("%d ",j);
				visited[j] = 1 ;
				enque(p,j);
			}
		}
	}
	
	return 0;
}