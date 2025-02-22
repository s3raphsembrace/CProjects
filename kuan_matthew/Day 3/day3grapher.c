#include<stdio.h>
//1 = + and +
//2 = + and -
//3 = - and -
//4 = - and +
int main()
{
int x,y;
	printf("Input numbers: \n");
	scanf("%d %d",&x,&y);
		if(x == 0) {
			if(y == 0)
				printf("this will be on the origin\n");
			else 
				printf("this wont be in any quadrant\n");
		}
		else if(y == 0)
			printf("this wont be in any quadrant\n");
		else {
			if(x>0) {
				if(y>0)
					printf("This will be on quadrant 1\n");
				else
					printf("This will be on quadrant 2\n");
			}
			else {
				if(y>0)
					printf("This will be on quadrant 4\n");
				else
					printf("This will be on quadrant 3\n");
		};

}}