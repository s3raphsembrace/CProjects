#include<stdio.h>
#include<math.h>

float a,b,c,x;

void roots(float a, float b, float c)
	{
		if(a == 0)
		{
			if(b == 0)
				printf("invalid.");
			else
				printf("linear \nroot = %f \n",-c/b);
		}
	else
	{
		float D = b*b - 4*a*c;
		printf("%f, %f \n",(-b+sqrt(D))/(2*a),(-b-sqrt(D))/(2*a));
	}
}
int main()
{
	printf("input 3 numbers:\n");
	scanf("%f %f %f",&a,&b,&c);

	roots(a,b,c);

	return 0;
}
//	printf("%d \n",fb(a,b,c));
//	printf("%d \n",b^2 - 4*a*c);

/*
int function()
{
	sqrt(a*x^2 + b*x + c);
}

int fb(int a,b,c) 
{
	return sqrt(b^2-4*a*c);
}
*/


//one function can only return one variable