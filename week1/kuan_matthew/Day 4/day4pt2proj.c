#include<stdio.h>

int main()
{
int x;
int y;
float c;
y=0;
c=0;
		while(x != 0) {
				printf("Enter number.\n");
				scanf("%d",&x);
				y += x;
				c += 1;
		}
		printf("The sum of all the numbers you added was:%d \n",y);
		printf("The mean of all the numbers you added was:%f \n",(float)y/c);
return 0;	
}