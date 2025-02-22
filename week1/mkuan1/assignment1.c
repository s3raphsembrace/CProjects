// Name: Matthew Kuan
// Assignment #1
// Input the amount of ibers you want to generate, it will also tell you a counter of how many odd and even ibers there are.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x,i;
	int a,b;
	a = 0;
	b = 0;
		printf("Input amount of numbers: \n");
		printf(" 1. 5\n 2. 10\n 3. 100\n 4. 1,000\n 5. 100,000\n 6. 1 million\n 7. 1 billion\n");
		scanf("%d",&x);
	//srand(time(2));
	switch(x)
		{
		case 1:
			x = 0;
			while(x <= 5)
				{
					//srand(time(0));
					int i = rand();
					printf("%d ",i);
					x += 1;

					if(i % 2 == 0)
						a += 1;
					else
						b += 1;
				}	
			break;
		case 2:
			x = 0;
			while(x <= 10)
				{
					//srand(time(0));
					int i = rand();
					printf("%d ",i);
					x += 1;

					if(i % 2 == 0)
						a += 1;
					else
						b += 1;
				}	
			break;
		case 3:
			x = 0;
			while(x <= 100)
				{
					//srand(time(0));
					int i = rand();
					printf("%d ",i);
					x += 1;

					if(i % 2 == 0)
						a += 1;
					else
						b += 1;
				}	
			break;
		case 4:
			x = 0;
			while(x <= 1000)
				{
					//srand(time(0));
					int i = rand();
					printf("%d ",i);
					x += 1;

					if(i % 2 == 0)
						a += 1;
					else
						b += 1;
				}	
			break;
		case 5:
			x = 0;
			while(x <= 100000)
				{
					//srand(time(0));
					int i = rand();
					printf("%d ",i);
					x += 1;

					if(i % 2 == 0)
						a += 1;
					else
						b += 1;
				}	
			break;
		case 6:
			x = 0;
			while(x <= 1000000)
				{
					//srand(time(0));
					int i = rand();
					printf("%d ",i);
					x += 1;

					if(i % 2 == 0)
						a += 1;
					else
						b += 1;
			break;
				}	
		case 7:
			x = 0;
			while(x <= 1000000000)
				{
					//srand(time(0));
					int i = rand();
					printf("%d ",i);
					x += 1;

					if(i % 2 == 0)
						a += 1;
					else
						b += 1;
				}	
			break;
		default:
			printf("Write a number between 1-7\n");
				
		}
	printf("\neven numbers: %d \n",a);
	printf("odd numbers: %d \n",b);

	printf("probability of even numbers: %f.\n probability of odd numbers: %f.\n",(float)a/(a+b),(float)b/(a+b));



	return 0;
}

//used this --> https://www.programiz.com/c-programming/examples/even-odd