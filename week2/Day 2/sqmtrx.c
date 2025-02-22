#include<stdio.h>

int matrix(int a[][10], int x, int y) {
	int i,j;
	for(i = 0;i<x;i++) {
		for(j=0;j<y;j++) 
			printf("%d ",a[i][j]);
			printf("\n");
	}
}

int trace(int a[][10], int b) {
	sum=0;
	for(i=0;i<b;i++) {
		sum+=m[i][i];
		return sum;
	}
}

int transpose(int a[][10], int b) {
	int i,j;
	for(i=1;i<b;i++) {
		for(j=0;j<i;j++) {
			m[i][j]+=m[j][i];
			m[j][i] = m[i][j]-m[j][i];
			m[i][j]-=m[j][i];
		}
	}
}

int main() {
int x,y;
int i,j;
printf("enter length and width: \n");
scanf("%d %d",&x,&y);
int a[x][10];
printf("enter matrix elements: \n");
	for(i=0;i<x;i++) {
		for(j=0;j<y;j++) 
			scanf("%d",&a[i][j]);
	}
printf("The matrix you entered is: \n",);
matrix(a,x,y);

printf("trace: \n")
trace(a,x,y);

printf("transposed: \n")
transpose(a,x,y);
}