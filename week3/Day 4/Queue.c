#include<stdio.h>
#include<stdlib.h>

// typedef struct node {
// 	int data;
// 	struct node *next;
// } node;

// // void view(node *n) {
// // 	while(n!=NULL) {
// // 		printf("%d ",n->data);
// // 		n = n->next;
// // 	}
// // 	printf("\n");
// // }

void enqueue(int ar[], int *rear, int n, int e) { //right end is the rear
	if(*rear == -1) {
		*rear = *rear + 1;
		ar[*rear] = e;
	}
	else if(*rear>=n-1){
		printf("queue full\n");
	}
	else {
		ar[++(*rear)] = e;
	}
}

int dequeue(int ar[], int *rear) {
	if(*rear == -1) {
		printf("Queue empty\n");
		return 0;
	}
	else {
		int x = ar[0];
		for(int i = 0;i<*rear;i++)
			ar[i] = ar[i+1];
		*rear = *rear - 1;
		return x;
	}
}

int peek(int ar[], int rear) {
	if(rear == -1) {
		printf("Queue empty\n");
		return 0;
	}
	else {
		return ar[0];
	}
}

int isEmpty(int ar[], int rear) {
	return rear == -1;
}

// int main() {
// 	int option;
// 	int stack[5], top=-1,n=5;
// 	printf("1. Enqueue\n2. Dequeue\n3. Front\n4. View\n5. Exit\n");
// 	scanf("%d",&option);
// 	switch(option) {
// 		case 1:
// 			push(stack[]);
// 			break;
// 		case 2:
// 			pop(stack[]);
// 			break;
// 		case 3:
// 			printf("%d",peek(stack[]));
// 			break;
// 		case 4:
// 			printf("%d",stack[]);
// 			break;
// 		default:
// 			return 0;
// 	}
// }


int main() {
	int option;
	int queue[5], rear = -1, n = 5;
	enqueue(queue,&rear,n,1);
	enqueue(queue,&rear,n,2);
	enqueue(queue,&rear,n,3);
	enqueue(queue,&rear,n,4);
	enqueue(queue,&rear,n,5);
	while(!isEmpty(queue,rear))
	{
		printf("%d\n",dequeue(queue,&rear));
	}
	return 0;
}