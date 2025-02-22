#include<stdio.h>

int main() {
	int i,x,a;
	int ar[1000];
	a=0;
	i=0;
	x=1;
	while(x!=0) {
		printf("enter numbers: \n");
		scanf("%d",&x);
			ar[i]=x;
			i++;
			a++;
		}
	for(i=0;i<a;i++)
		printf("%d ",ar[i]);
	printf("\n")
}