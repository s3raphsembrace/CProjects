#include<stdio.h>

void matrix(int m[][10], int x, int y) {
	int i,j;
	for(i = 1;i<x;i++) {
		for(j=0;j<y;j++) {
			printf("%d ",m[i][j]);
			printf("\n");
		}
	}
}

int main() {
int x,y;
int i,j;
printf("enter length and width: \n");
scanf("%d %d",&x,&y);
int m[x][10];
printf("enter matrix elements: \n");
for(i = 0;i<x;i++) {
	for(j = 0;j<y;j++) {
		scanf("%d",&m[i][j]);
	}
}
printf("The matrix you entered is:\n");
matrix(m,x,y);
}