int changeValue() {
	char str[100];
	int dis;
int i = 9;
	char c;
	FILE *text;
	text = fopen("database/student.txt","a");
	printf("Student ID = %d\n",i);
	printf("\nEnter Name: \n");
	scanf("%s",st[i].name);
	// fgets(str, sizeof(str), stdin);
 	// str[strlen(str)-1] = '\0';
	// strcpy(st[i].name, str);

	printf("\nEnter Date of Birth: \n");
	scanf("%d",&st[i].DOB);

	printf("\nEnter Grade: \n");
	scanf("%d",&st[i].Grade);

	printf("\n1. Art\n2. Code\n3. Basketball\n4.Soccer\n");
	printf("Enter Club: \n");
	scanf("%d",&st[i].Club);

	printf("\nEnter Extracurricular: \n");
	scanf("%d",&st[i].Extracurriculars);

	printf("\nEnter GPA: \n");
	scanf("%f",&st[i].GPA);

printf("Save Student?\n1. No\n2. Yes\n");
scanf("%d",&dis);
	switch(dis) {
	case 1: 
		return 0;
	case 2:
		break;
	}
fputs("\n", text);
	fputs("Name: ",text);
	fputs(st[i].name, text);
	fputs("\n", text);
	fprintf(text, "Date of Birth: %d\n",st[i].DOB);
	fprintf(text, "Grade: %d\n",st[i].Grade);
	fprintf(text, "Club: %d\n",st[i].Club);
	fprintf(text, "Extracurricular: %d\n",st[i].Extracurriculars);
	fprintf(text, "GPA: %f\n",st[i].GPA);
	fprintf(text, "Student ID: %d\n",i);
	fclose(text);

	FILE *self, *dup;
	self = fopen("database/value.c","r");
	dup = fopen("database/duplicate.c","w");
	char line[200];
	for(int j=1;fgets(line,sizeof(line),self),j<4;j++) {
	fputs(line,dup); }
	i++;
	fprintf(dup, "int i = %d;\n",i);
	for(int j=5;fgets(line,sizeof(line),self),j<67;j++) {
	fputs(line,dup); }

    fclose(self);
    fclose(dup);
    remove("database/value.c");
	rename("database/duplicate.c", "database/valueI.c");
}