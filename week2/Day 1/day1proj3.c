#include<stdio.h>

int i;
int x,a;

int maxx(int ar[], int x) {
	int max = ar[0];
	for (i = 1;i<x;i++) {
		if(ar[i] > max) {
			max = ar[i];
		}
	}
	return max;
}

int minn(int ar[], int x) {
	int max = ar[0];
	for (i = 1;i<x;i++) {
		if(ar[i] < max) {
			max = ar[i];
		}
	}
	return max;
}

int main() {
int ar[10];

x=0;
	printf("enter 10 numbers:\n");
		for(a=0;a<10;a++,x++) {
			scanf("%d",&ar[x]);
			printf(" %d \n \n",ar[x]);
		}
		printf("the maximum number is %d \n",maxx(ar,x));
		printf("the maximum number is %d \n",minn(ar,x));
}
