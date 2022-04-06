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
struct node* getPred(struct node* root)
{
	root = root->left ; 
	while(root->right!=NULL) {
		root = root->right;
	}
	return root;
}
struct node* delete(struct node *root , int key)
{
	struct node* ipre ; 
	if(root == NULL) return NULL;
	if(root->left == NULL && root->right==NULL) {free(root); return NULL;}
	if(key < root->info) {
		root->left = delete(root->left , key); // doubt
	}
	else if(key > root->info) root->right = delete(root->right , key);
	else{
		ipre = getPred(root);
		root->info = ipre->info;
		root->left = delete(root->left , ipre->info); // doubt
	}
	return root; // doubt
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
	
	inorder(p);
	printf("\n");
	delete(p,12);
	inorder(p);
	

	
	
	return 0 ;
}