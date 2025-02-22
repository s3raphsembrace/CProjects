#include<stdio.h>
#include<stdlib.h>

int main() {
	int x,i;
	printf("enter amount of integers:\n");
	scanf("%d",&x);
	int *ar = (int*)malloc(x*sizeof(int));
	printf("enter integers:\n");
	for(i=0;i<x;i++)
		scanf("%d",ar+i);
	printf("array:\n");
	for(i=0;i<x;i++)
		printf("%d ",ar[i]);
	printf("\n");

	int y,e,c,choice;
	printf("1. Insert\n2. Delete");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			ar[x+1];
			printf("enter where you want to insert the new integer: \n");
			scanf("%d",&e); //e
			printf("enter integer: \n");
			scanf("%d",&y);
			ar = (int*)realloc(ar,(e)*sizeof(int));
			for(i=x;i!=e;i--) 
				int c=i;
			*a = (int*)realloc(*a,(x+y)*sizeof(int));
			for(int i=x;i<x+y;i++)
			(*a)[i] = (*b)[i-x];
			free(*b);
			*b=NULL;
			// ar = (int*)realloc(ar,(x+1)*sizeof(int));
			// for(i=x;i>0;i--)
			// 	ar[i]=ar[i-1];
			ar[c]=y;
			break;

		case 2:
			printf("enter where you want to delete the integer: \n");
			scanf("%d",&e);
			break;

		default:
			printf("enter 1 or 2\n");
			return 0;
	}
	for(i=0;i<x;i++)
		printf("%d ",ar[i]);
	printf("\n");
}
