//bst with inorder traversal
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node* newNode(int data){
	struct node* temp= (struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;

}
struct node* insert(struct node* root, int data){
	if(root==NULL)
		return(newNode(data));
	if(data<root->data){
		root->left=insert(root->left, data);
		}
	else if(data>root->data){
		root->right=insert(root->right, data);
	}
return(root);
}
void inorder(struct node* root){
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d->",root->data);
	inorder(root->right);
}
int main(){
struct node *root=NULL;
root=insert(root,50);
insert(root,56);
insert(root,4);
insert(root,34);
insert(root,2);
inorder(root);
return(0);
}
	
