#include<stdio.h>
#include<stdlib.h>

int binary(int ar[], int x, int e) {
	int l,r,y,pos;
	l=0;
	r=x-1;
	pos=-1;
	while(l<r) {
		y= (l+r)/2;
		if(ar[y]==e) {
			pos = y;
			break;
		}
		else if(e>ar[y])
			l=y+1;
		else
			r=y-1;
	}
	return pos;
}

int main() {
	int x,i,e,pos;
	printf("enter amount of integers:\n");
	scanf("%d",&x);
	int *ar = (int*)malloc(x*sizeof(int));
	printf("enter integers:\n");
	for(i=0;i<x;i++)
		scanf("%d",ar+i);
	printf("array:\n");
	for(i=0;i<x;i++)
		printf("%d ",ar[i]);
	printf("\n")

	printf("enter element to search:\n");
	scanf("%d",&e);

	pos = binary(ar,x,e);
	if(pos==1)
		printf("element not found\n");
	else
		printf("element found at index 3%d\n",pos);
}