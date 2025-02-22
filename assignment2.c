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
	int Department;
	int Extracurriculars;
};

typedef struct student stud;
stud st1, st2, st3, st4, st5;


// void del(student[]) {
// 	printf("Enter student number: \n");
// 	scanf("%d",n);
// 	student[n]
// }

void create(student **s) {
	char name[100],str[100];
	printf("Enter name:\n");
	fgets(str, sizeof(str), stdin);
   	str[strlen(str)-1] = '\0';
	strcpy(st1.name, str);

	printf("Enter Date of Birth: \n");
	scanf("%d",&st1.DOB);

	printf("Enter Date of Birth: \n");
	scanf("%d",&st1.Grade);

	fputs("\n", text);
	fputs(st1.name, text);




	printf("%s",name[i]);
	printf("Save Student? y/N");

} 

int main() {
	int menu,i;
	char str[100];
	FILE *text;
	text = fopen("student.txt","a");
	printf("1. Create\n2. Delete\n3. Display\n4. Exit");
	scanf("%d",menu);
	switch(menu) {
		case 1:
			create();
			break;
		case 2:
			// del();
			break;
		case 3:
			// printf("Display all? y/N");
			// scanf("%s",str);
			// if(str = 'y' || 'Y' || 'yes' || 'Yes');
			// 	for(i=0;i<max,i++) {
			// 		printf("%s",student[i]);
			// 	}
			
		default:
			return 0;
	}
}