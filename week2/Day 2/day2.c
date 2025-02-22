#include<stdio.h>
#include<string.h>

void upper(char str[]) {
	int i, n = strlen(str);
	if(str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	for(i = 1;i<n;i++) {
		if(str[i-1] == ' ') {
			if(str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		}
	}
}

int main() {
	char str[100];
	printf("enter text:\n");
	fgets(str, sizeof(str), stdin);
	str[strlen(str)-1] = '\0';
	upper(str);
	printf("%s \n",str);
}
