#include<stdio.h>
#include<string.h>

void reverse(char str[]) {
	int i,n = strlen(str);
	for(i=0;i<n/2;i++) {
		str[i] = str[i]+str[n-i-1];
		str[n-i-1] = str[i]-str[n-i-1];
		str[i] = str[i]-str[n-i-1];
	}
}

int main() {
	char str[100];
	printf("enter text:\n");
	fgets(str, sizeof(str), stdin);
	str[strlen(str)-1] = '\0';
	reverse(str);
	printf("%s \n",str);
	}