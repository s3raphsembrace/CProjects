#include<stdio.h>
#include<stdlib.h>

void merge(int **a, int **b, int x, int y) {
	*a = (int*)realloc(*a,(x+y)*sizeof(int));
	for(int i=x;i<x+y;i++)
		(*a)[i] = (*b)[i-x];
	free(*b);
	*b=NULL;
}

int main() {
	int x,y,i,j;
	printf("enter amount of integers:\n");
	scanf("%d",&x);
	int *a = (int*)calloc(x,sizeof(int));
	if(a==NULL)
		exit(0);

	printf("enter integers:\n");
	for(i=0;i<x;i++)
		scanf("%d",&a[i]);
	
	printf("enter amount of integers for second array:\n");
	scanf("%d",&y);
	int *b = (int*)calloc(y,sizeof(int));
	if(b==NULL)
		exit(0);

	printf("enter integers:\n");
	for(j=0;j<y;j++)
		scanf("%d",&b[j]);

	merge(&a,&b,x,y);
 
	// a = (int*)realloc(a,(x+y)*sizeof(int));
	// for(i=x;i<x+y;i++)
	// 	a[i] =b[i-x];
	// free(b);
	// b=NULL;
	printf("new array:\n");
	for(i=0;i<x+y;i++)
		printf("%d ",a[i]);
	printf("\n");
}