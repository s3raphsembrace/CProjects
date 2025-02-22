//Name: Matthew Kuan
//Assignment #2
//Student Database

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
	char name[100];
	int DOB;
	int Grade;
	int Club;
	int Extracurriculars;
	float GPA;
};

typedef struct student stud;
stud st1, st2, st3, st4, st5;

enum clubs { Art = 1, Code, Basketball, Soccer};

int main() {
	int menu,i;
	char str[100];
	FILE *text;
	text = fopen("student.txt","a");
	 
	printf("Enter Name: \n");
	fgets(str, sizeof(str), stdin);
   	str[strlen(str)-1] = '\0';
	strcpy(st1.name, str);

	printf("Enter Date of Birth: \n");
	scanf("%d",&st1.DOB);

	printf("Enter Grade: \n");
	scanf("%d",&st1.Grade);

	printf("1. Art\n2. Code\n 3.Basketball\n4.Soccer\n");
	printf("Enter Club: \n");
	scanf("%d",&st1.Club);

	printf("Enter Extracurricular: \n");
	scanf("%d",&st1.Extracurriculars);

	printf("Enter GPA: \n");
	scanf("%f",&st1.GPA);

	fputs("\n", text);
	fputs(st1.name, text);
	fprintf(text, "%d",st1.DOB);
}


