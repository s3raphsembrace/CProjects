#include<stdio.h>

int main()
{
	int x;
	printf("Enter a year:\n");
	scanf("%d",&x);
	if(x / 100 > 0)
		{
		if(x / 400 >  0)
				printf("This is a leap year!\n");
		else
				printf("This is not a leap year.\n");
		}
		else if(x / 4 > 0)
			printf("This is a leap year!\n");
	else
		printf("This is not a leap year.\n");
return 0;
}
//div by 100 then div by 400 = leap
//div by 4 then leap

//next project take 2 numbers and decide which quadrant on a graph it would be long on (x,y)
//1 = + and +
//2 = + and -
//3 = - and -
//4 = - and +

