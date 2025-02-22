#include<stdio.h>

void add(int sum[][10],int a[][10], int b[][10], int r, int c) {
	int i,j;
	for(i=0;i<r;i++) {
		for(j=0;j<c;j++)
			sum[i][j] = a[i][j]+b[i][j];
	}
}
int main() {
	int a[2][10] = {{1,0},{0,1}}, b[2][10] = {{0,1},{1,0}};
	int sum[2][10];
	add(sum,a,b,2,2);
	for(int i=0;i<2;i++) {
		for(int j=0;j<2;j++) {
			printf("%d \n",sum[i][j]);
		}
	}
}