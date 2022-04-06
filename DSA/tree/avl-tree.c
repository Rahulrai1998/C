// insert and rotate an AVL tree
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info ; 
	struct node *left;
	struct node *right;
	int height;
};

int max(int a , int b)
{
	if(a>b) return a;
	else return b;
}

int getHeight(struct node *n)
{
	if(n==NULL)
		return NULL;
	else return n->height;
}

struct node *createNode(int key)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->info = key;
	node->left = node->right = NULL;
	node->height = 1;	
	return node;
}

int getBalanceFactor(struct node* n)
{
	if(n==NULL) return 0;
	return (getHeight(n->left) - getHeight(n->right));
}
 
struct node*rightRotate(struct node* y)
{
	struct node* x = y->left ; 
	struct node* t2 = x->right;
	
	x->right = y ; 
	y->left = t2;
	
	 x->height = max(getHeight(x->right) , getHeight(x->left)) + 1 ; 
	y->height = max(getHeight(y->right),getHeight(y->left))+1;
	return x ; 
}
struct node*leftRotate(struct node* x)
{
	struct node* y = x->left ; 
	struct node* t2 = y->left;
	
	x->right = t2 ; 
	y->left = x;
	
	 y->height = max(getHeight(y->right) , getHeight(y->left)) + 1 ; 
	y->height = max(getHeight(x->right),getHeight(x->left))+1;
	return y ; 
}

struct node* insert(struct node *n , int key)
{
	if(n==NULL) return(createNode(key));	
	if(k<node->key)
		node->left = insert(node->left , key);
	else if(key>node->key)
		node->right = insert(node->right , key);
		return node;
	node->height = 1 + max(getHeight(node->left) , getHeight(node->left));
	int bf = getBalancedFactor(node);

}

int main()
{

	return 0 ;
}