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
int isBST(struct node* root)
{
	static struct node* prev = NULL ;
	if(root!=NULL)
	{
		if(!isBST(root->left)) return 0;
		if(prev!=NULL && root->info <= prev->info) return 0;
		prev = root;
		return isBST(root->right);
		
	}
	else return 1;
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
	
	/*preorder(p);
	postorder(p);
	inorder(p);*/
	printf("%d", isBST(p));


	return 0 ;
}