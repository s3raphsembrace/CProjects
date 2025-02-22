#include<stdio.h>
#include<string.h>

struct students {
	char name[10][1000];
	int age;
	int grade;
} stud;

void name(int x) {
	int a,i;
	char name[10][1000];
	i=0;
	
	for(a=0;a<x;a++) {
		printf("enter name: \n");
		scanf("%s",name[i]);
	}
}

void grade(int x) {
	enum grade {
		FRESHMAN = 1, SOPHOMORE, JUNIOR, SENIOR
	};
	int a,g;
	for(a=0;a<x;a++) {
		printf("1. FRESHMAN\n2. SOPHOMORE\n3. JUNIOR\n4. SENIOR\n");
		printf("Enter grade: \n");
		scanf("%d",&g);
			if(g<1 || g>4) {
				printf("Enter a number 1-4\n");
				return 0;
		enum grade stud = g;
		}		
	}
}

void age(int x) {
	int a,h;
	for(a=0;a<x;a++) {
		printf("Enter age: \n");
		scanf("%d",&h);
		enum age stud = h;
		}		
	}

int main() {
int x;
	printf("input number of students: (10 max)\n");
	scanf("%d",&x);
		if (x>10) {
		printf("enter a number less than 10\n");
		return 0;
	}
	name(x);
	grade(x);
	age(x);
}

// void namee(int x) {
// 	int a,i;
// 	char name[100];
// 	char str[100];
// 	i=0;
// 	for(a=0;a<=x;a++) {
// 		printf("enter name: ");
// 		fgets(str, sizeof(str), stdin);
// 		str[strlen(str)-1] = '\0';
// 		//name[i][strlen(str)-1] = '\0';
// 		name[i] = str;
// 		i++;
// 	}
// 	for(i=0;i<=x;i++) {
// 		printf("Name: %s \n",name[i]);
// 	}
// } 