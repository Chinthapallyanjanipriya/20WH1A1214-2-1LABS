#include<stdio.h>
#include<stdlib.h>
#define max_size 10
void traversal();
void push(int);
void pop();
int Isfull();
int Isempty();
int stack[max_size],top;
int main(){
	int choice,item,value,want_continue;
	printf("Enter choice:1.push,2.pop,3.traversal\n");
	top=stack[0];
	do{
		printf("Enter choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:printf("Enter item to be pushed:");
				scanf("%d",&item);
				push(item);
				break;
			case 2:pop();
			       break;
			case 3:traversal();
			       break;
		}
		printf("want to continue,enter 1:");
		scanf("%d",&want_continue);
	}while(want_continue==1);
}
int Isempty(){
	return top<0;
}
int Isfull(){
	return top==max_size;
}
void push(int item){
	if(Isfull()==1){
		printf("Overflow\n");
		return;
	}
	stack[top]=item;
	top+=1;
}
void pop(){
	if(Isfull()==1){
	printf("Underflow\n");
	return;
	}
	top=top-1;
}
void traversal(){
	int i;
	for(i=0;i<top;i++){
		printf("%d\t",stack[i]);
	}
}
