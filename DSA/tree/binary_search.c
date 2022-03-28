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
struct node *search_itr(struct node *root , int key)
{
	while(root !=NULL)
	{
		if(root->info == key) return root;
		else if(root->info > key) root = root->left;
		else root = root->right;
	}
	return NULL;
}
void insert (struct node *root , int key)
{
	struct node *prev , *ptr ; 
	while(root!=NULL)
	{
		prev = root ; 
		if(root->info == key) return;
		else if(key < root->info) root = root->left;
		else root =root->right;
	}
	ptr = createNode(key);
	if(key < prev->info) prev->left = ptr;
	else prev->right = ptr;
}
int main()
{
	
	struct node *p = createNode(11);
	struct node *p1 = createNode(8);
	struct node *p2 = createNode(12);
	struct node *p3 = createNode(5);
	struct node *p4 = createNode(9);
	
	p->left = p1 ; 
	p->right = p2 ;
	p1->left = p3;
	p1->right = p4;

	
	
	return 0 ;
}