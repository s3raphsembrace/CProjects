#include<stdio.h>

int Fibonacci(int n)
{
int i;
n=i;
	if(i<2) 
		return n;
	else 
	{
		return n + Fibonacci((n-1)+(n-2));
		i-=1;
	}
}

int main() 
{
int n;
	printf("Input number:\n");
	scanf("%d",&n);
	if(n < 2)
		printf("Enter a number greater than or equal to 2.\n");
	else
		printf("%d \n",Fibonacci(n));
}

