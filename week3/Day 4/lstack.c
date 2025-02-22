#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} node;

void traverse(node *n) {
	while(n != NULL) {
		printf("%d ",n->data);
		n = n->next;
	}
	printf("\n");
}

void push(node **n, int x) {
	node *s = (node *)malloc(sizeof(node *));
	s->data = x;
	s->next = NULL;
	if(*n == NULL)
		*n = s;
	else {
		s->next = *n;
		*n = s;
	}
}

int pop(node **start) {
	if(*start == NULL) {
		printf("list empty\n");
		return 0;
	}
	int x = (*start)->data;
	node *temp = *start;
	*start = (*start)->next;
	free(temp);
	return x;
}

int isEmpty(node *top) {
	return top == NULL;
}

int main() { 
node *top = NULL;
for(int i=1;i<=10;i++)
	push(&top,i);
traverse(top);
while(!isEmpty(top))
	printf("%d ",pop(&top));
printf("\n");
	return 0;
}