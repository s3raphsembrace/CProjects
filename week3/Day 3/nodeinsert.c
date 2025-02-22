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

void insertLeft(node **n, int x) {
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

void insertRight(node **n, int x) {
	node *s = (node *)malloc(sizeof(node *));
	s->data = x;
	s->next = NULL;
	if(*n == NULL)
		*n = s;
	else {
		node *curr = *n;
		while(curr->next != NULL)
			curr = curr->next;
		curr->next = s;
	}
}

void appendAt(node **n, int x, int pos) {
	node *s = (node *)malloc(sizeof(node *));
	s->data = x;
	s->next = NULL;
	if(*n == NULL) {
		*n = s;
	}
	else if(pos==0) {
		s->next = *n;
		*n = s;
	}
	else {
		node *curr = *n;
		for(int i=0;i<pos-1 && curr->next != NULL; i++)
			curr = curr->next;
		if(curr->next == NULL)
			curr->next = s;
		else {
			s->next = curr->next;
			curr->next = s;
		}
	}
}
int main() {
	node *start = NULL;
	appendAt(&start,0,0);
	traverse(start);
	appendAt(&start,1,1);
	traverse(start);
	appendAt(&start,2,1);
	traverse(start);
	appendAt(&start,3,1);
	traverse(start);
	return 0;
}