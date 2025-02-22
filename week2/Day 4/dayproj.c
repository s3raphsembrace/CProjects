#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	FILE *fileVar;
	fileVar = fopen("day4.txt", "r");

	char line[200];
	int i;
	float x;
	x=0;
	for(int i=1;fgets(line,sizeof(line),fileVar);i++) {
		printf("%s",line);
		x += atof(line);
	}

	float a;
	a = x-(x/i);

	printf("\nMean: %f \n",x/i);
	printf("Standard Deviation: %f\n",sqrt(a));
	fclose(fileVar);
}