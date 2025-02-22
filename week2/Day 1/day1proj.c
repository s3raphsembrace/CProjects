#include<stdio.h>

int number(int x) 
{	
int i;
i=x;
	if(i == 1)
		return x;
	else
		return (x*(number(i-1)));
}
//x*=(x-1);
//int a,b;

int main() 
{
int x;
	printf("Input number:\n");
	scanf("%d",&x);
		if(x < 1)
			printf("Dont enter a number less than 1\n");
		else 
			printf("%d! = %d \n",x,number(x));
		return 0;
}



