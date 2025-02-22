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
	ar = (int*)realloc(ar,(x+2)*sizeof(int));
	for(i=x;i>0;i--)
		ar[i]=ar[i-1];
	ar[0]=0;
	ar[x+1]=0;

	printf("new array:\n");
	for(i=0;i<x+2;i++)
		printf("%d ",ar[i]);
	printf("\n");
}