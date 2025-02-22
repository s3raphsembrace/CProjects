#include<stdio.h>

int main()
{
	float x,y;
	int op;
		printf("Enter two numbers:\n");
		scanf("%f %f",&x,&y);
//		scanf("%f", &y)
			printf("1. Add\n");
			printf("2. Subtract\n");
			printf("3. Multiply\n");
			printf("4. Divide\n");
				printf("Enter what operation you want to do:\n");
				scanf("%d",&op);
	switch(op)
		{
			case 1:
				printf("The sum of these numbers is:\n");
				printf("%f\n",x+y);
				break;
			case 2:
				printf("The difference of these numbers is:\n");
				printf("%f\n",x-y);
				break;
			case 3:
				printf("The product of these numbers is:\n");
				printf("%f\n",x*y);
				break;
			case 4:
				printf("The quotient of these numbers is:\n");
				printf("%f\n",x/y);
				break;
			default:
			printf("Enter numbers 1-4 only.\nRun program again");
		}
		return 0;

}