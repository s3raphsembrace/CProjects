#include<stdio.h>

int main()
{
int x;
int y;
y = 0;
	printf("Enter a number: ");
	scanf("%d",&x);

	while(y<13)
	{
		printf("%d*%d=%d\n",x,y,x*y);
		y += 1;
	}
	return 0;
}
