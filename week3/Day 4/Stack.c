#include<stdio.h>
#include<stdlib.h>

void push(int stack[], int *top, int n, int e) {
	if(*top>=n-1) {
		printf("stack full\n\n");
	}
	else
		stack[++(*top)] = e;
}

int pop(int stack[], int *top) {
	if(*top == -1) {
		printf("Stack empty\n\n");
		return 0;
	}
	else
		return stack[(*top)--];
}

int peek(int stack[], int top) {
	if(top == -1) {
		printf("stack empty\n\n");
		return 0;
	}
	else
		return stack[top];
}

int isempty(int stack[], int top) {
	return top == -1;
}

// int ah() {
// 	int option;
// 	int stack[5], top = -1, n = 5;
// 	printf("1. Push\n2. Pop\n3. Peek\n4. View\n5. Exit\n");
// 	scanf("%d",&option);
// 	switch(option) {
// 		case 1:
// 			push(stack,&top,n,top+1);
// 			break;
// 		case 2:
// 			pop(stack,&top);
// 			break;
// 		case 3:
// 			peek(stack,top);
// 			break;
// 		case 4:
// 			for(int i=0;i<top;i++) {
// 				printf("%d ",stack[i]);
// 			}
// 			printf("\n");
// 			break;
// 		default:
// 			return 0;
// 	}
// 	ah();
// }


int main() {
	int option;
	int stack[5], top = -1, n = 5;
	push(stack,&top,n,1);
	push(stack,&top,n,2);
	push(stack,&top,n,3);
	push(stack,&top,n,4);
	push(stack,&top,n,5);
	while(!isempty(stack,top))
	{
		printf("%d\n",pop(stack,&top));
	}
	ah();
}


