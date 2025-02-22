#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int counter(char*str) {
	int x;
	x=0;
	while(*str != '\0') {
		x++;
		str++;
	}
	return x; 
}

int finder(char*str) {
	int y,x;
	x=0;
	printf("what letter do you want to find: \n");
	scanf("%d",&y);
	while(*str != y || '\0') {
		x++;
		str++;
	}
	return x; 
}

void reversee(char str[]) {
	int i,n = strlen(str);
	char*a=str[i];
	char *b=str[n-i-1];
	for(i=0;i<n/2;i++) {
		a = a+b;
		b = a-b;
		a = a-b;
	}
}

int main() {
	char str[100];
	printf("enter text:\n");
	fgets(str, sizeof(str), stdin);
	str[strlen(str)-1] = '\0';
	printf("%s \n",str);

	printf("%d \n",counter(str));
	
	reversee(str);
	printf("%s \n",str);

	printf("%d \n",finder(str));
	}