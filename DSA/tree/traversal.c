// Inorder , preorder and postorder traversal of a Binary tree 

#include<stdio.h>
#include<malloc.h>
struct node
{
	int info ;
	struct node *left ; 
	struct node *right;
};
struct node* createNode(int data)
{
	struct node* n = (struct node*)malloc(sizeof(struct node));
	n->info = data;
	n->left = NULL;
	n->right = NULL;
	return n ; 
}
void preorder(struct node* p)
{
	if(p!=NULL)
	{
	printf("%d ",p->info);
	preorder(p->left);
	preorder(p->right);	
	}
	
}
void postorder(struct node*p)
{
	if(p!=NULL)
	{
		postorder(p->left);
		postorder(p->right);
		printf("%d ",p->info);
	}
	

}
void inorder(struct node*p)
{
	if(p!=NULL)
	{
		inorder(p->left);
		printf("%d ",p->info);
		inorder(p->right);
	}
}
struct node* search(struct node* root , int key)
{
	if(root==NULL) return NULL;
	if(key == root->info) return root;
	else if(key < root->info) return search(root->left , key);
	else return search(root->right , key);

}
int main()
{
	struct node *p = createNode(11);
	struct node *p1 = createNode(5);
	struct node *p2 = createNode(6);
	struct node *p3 = createNode(2);
	struct node *p4 = createNode(2);
	
	p->left = p1 ; 
	p->right = p2 ;
	p1->left = p3;
	p1->right = p4;
	
	printf("%d",search(p,6)->info);


	return 0 ;
}