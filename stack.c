
//stack using arrays

#include<stdio.h>

int stack[100];
int max=100;
int top=-1;

int isempty(){
	if(top==-1){
		printf("Stack is empty");
		return(1);
	}
	else{
		return(0);
	}
}
int isfull(){
	if(top==max){
		printf("stack is full");
		return(1);
	}
	else{
		return(0);
	}
}
int pop(){
	int val;
	if(isempty()==0){
		val=stack[top];
		top-=1;
		return(val);
	}
	else{
		printf("no values to pop");
	}
}
int push(int val){
	if(isfull()==0){
		top=top+1;
		stack[top]=val;
	}
	else{
		printf("stack is full");
	}
}
int top_val(){
	return(stack[top]);
}
int main(){
	push(2);
	push(23);
	printf("top of the stack %d\n",top_val());
	while(!isempty()){
		int top=pop();
		printf("%d\t",top);
	}
	return(0);
}