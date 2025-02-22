#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

void bubble(int ar[], int x) {
	int i,j;
	for(i=0;i<x-1;i++) {
		for(j=0;j<x-i-1;j++) {
			if(ar[j+1]<ar[j])
				swap(&ar[j],&ar[j+1]);
		}
	}
}

int main() {
	int x,i;
	printf("enter number of integers:\n");
	scanf("%d",&x);
	int ar[x];
	printf("enter integers:\n");
	for(i=0;i<x;i++)
		scanf("%d",ar+i);
	bubble(ar,x);

	printf("sorted array:\n");
	for(i=0;i<x;i++)
		printf("%d ",ar[i]);
	printf("\n");
}