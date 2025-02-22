#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} node;

node* newNode(int x) {
	node *n = (node*)malloc(sizeof(node));
	n->data = x;
	n->next = NULL;
	return n;
}
void traverse(node *n) {
	while(n != NULL) {
		printf("%d ",n->data);
		n = n->next;
	}
	printf("\n");
}

void enqueue(node **front, node **rear, int x) {
	node *s = newNode(x);
	if(*rear == NULL) {
		*front = *rear = s;
	}
	else {
		(*rear)->next = s;
		*rear = s;
	}
}

int dequeue(node **front, node **rear) {
	if(*front == NULL) {
		printf("queue empty\n");
		return 0;
	}
	node *temp = *front;
	int x = temp->data;
	*front = (*front)->next;
	if(*front == NULL)
		*rear == NULL;
	free(temp);
	return x;
}

int isEmpty(node *top) {
	return top == NULL;
}

int main() { 
node *front = NULL, *rear = NULL;
for(int i=1;i<=10;i++)
	enqueue(&front,&rear,i);
traverse(front);
while(!isEmpty(front))
	printf("%d ",dequeue(&front,&rear));
printf("\n");
	return 0;
}