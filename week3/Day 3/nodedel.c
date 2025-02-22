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

int delLeft(node **start) {
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

int delRight(node **start) {
	if(*start == NULL) {
		printf("list empty\n");
		return 0;
	}
	else if((*start)->next == NULL) {
		node *temp = *start;
		int x = temp->data;
		free(temp);
		return x;
		}
		node *curr = *start;
		while(curr->next->next != NULL)
			curr = curr->next;
		node *temp = curr->next;
		curr->next = NULL;
		int x = temp->data;
		free(temp);
		return x;
}

int appendAt(node **n, int x) {
	node *s = (node *)malloc(sizeof(node *));
	s->data = x;
	s->next = NULL;
	if(*n == NULL) {
		*n = s;
	}
	else {
		node *curr = *n;
		while(curr->next!= NULL)
			curr = curr->next;
		curr->next = s;
	}
}

int main() {
	node *start = NULL;
	int x;
	appendAt(&start,0);
	traverse(start);
	appendAt(&start,1);
	traverse(start);
	appendAt(&start,2);
	traverse(start);
	appendAt(&start,3);
	traverse(start);

	x = delLeft(&start);
	printf("%d deleted\n",x);
	traverse(start);
	x = delLeft(&start);
	printf("%d deleted\n",x);
	traverse(start);
	x = delLeft(&start);
	printf("%d deleted\n",x);
	traverse(start);
	x = delLeft(&start);
	printf("%d deleted\n",x);
	traverse(start);
	x = delLeft(&start);
	printf("%d deleted\n",x);
	traverse(start);
	return 0;
}