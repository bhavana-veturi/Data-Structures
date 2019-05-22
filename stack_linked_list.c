#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*top=NULL;
void push(int val){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	if(top==NULL)
		newnode->next=NULL;
	else
		newnode->next=top;
	top=newnode;
}
void pop(){
	if(top==NULL){
		printf("stack is empty");

	}
	else{
		struct node *temp=top;
		printf(" element popped %d",temp->data);
		top=temp->next;
		free(temp);
	}
}
void display()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct node *temp = top;
      while(temp->next != NULL){
	 printf("%d--->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL",temp->data);
   }
}

void main()
{
   int choice, value;
   while(1){
      printf("1. Push\n2. Pop\n3. Display\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 push(value);
		 break;
	 case 2: pop(); break;
	 case 3: display(); break;
	 default: printf("try again!\n");
      }
   }
}