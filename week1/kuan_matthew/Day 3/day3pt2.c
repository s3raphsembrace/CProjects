#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter three sides of a triangle:\n");
	scanf("%d %d %d".&a,&b,&c);
/*	if(a+b > c && b+c > a && a+c >b)
		printf("Valid sides of a triangle.\n");
	else
		printf("These sides cannot form a triangle.\n");
*/	if(a+b > c)
	{
		if(b+c > a)
		{
			if(a+c > b)
				printf("valid sides of a triangle.\n")
			else
				printf("invalid sides.\n")		
		}
		else
				printf("invalid sides.\n")
	}
	else
				printf("invalid sides.\n")
	return ;
}