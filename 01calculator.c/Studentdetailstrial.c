#include <stdio.h>

int main()
{
	char SchoolName[100];
	char StudentName[100];
	char Class[50];
	char registrationNo[100];
	char grade;
	char remark[100];
	int a, b, c, d, e, f, g, h;
	float average;

	printf("Please enter your school's name in caps: ");
	fgets(SchoolName, sizeof(SchoolName), stdin);

	printf("Please enter your name in caps: ");
	fgets(StudentName, sizeof(StudentName), stdin);

	printf("Please enter your class in caps: ");
	fgets(Class, sizeof(Class), stdin);

	printf("Please enter your registration number in caps: ");
	fgets(registrationNo, sizeof(registrationNo), stdin);

	printf("Please enter your score for Mathematics: ");
	scanf("%d", &a);

	printf("Please enter your score for English: ");
	scanf("%d", &b);

	printf("Please enter your score for Kiswahili: ");
	scanf("%d", &c);

	printf("Please enter your score for Chemistry: ");
	scanf("%d", &d);

	printf("Please enter your score for Biology: ");
	scanf("%d", &e);

	printf("Please enter your score for Physics: ");
	scanf("%d", &f);

	printf("Please enter your score for Geography: ");
	scanf("%d", &g);

	printf("Please enter your score for CRE: ");
	scanf("%d", &h);

	average = ((a + b + c + d + e + f + g + h) / 8);

	if (average >= 0 && average <= 39)
	{
		grade = 'E';
		snprintf(remark, sizeof(remark), "Repeat Class");
	}
	else if (average >= 40 && average <= 49)
	{
		grade = 'D';
		snprintf(remark, sizeof(remark), "Work Harder");
	}
	else if (average >= 50 && average <= 59)
	{
		grade = 'C';
		snprintf(remark, sizeof(remark), "Good");
	}
	else if (average >= 60 && average <= 69)
	{
		grade = 'B';
		snprintf(remark, sizeof(remark), "Very Good");
	}
	else if (average >= 70 && average <= 100)
	{
		grade = 'A';
		snprintf(remark, sizeof(remark), "Excellent");
	}
	printf("%s", SchoolName);
	printf("RESULTS SLIP FOR: %s", StudentName);
	printf("REGISTRATION NUMBER: %s", registrationNo);
	printf("CLASS: %s", Class);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("SUBJECT                      MARKS                     GRADE\n");
	printf("1. English                    %d                         %c    \n", a, grade);
	printf("2. Kiswahili                  %d                         %c    \n", b, grade);
	printf("3. Marhematics                %d                         %c    \n", c, grade);
	printf("4. Chemistry                  %d                         %c    \n", d, grade);
	printf("5. Physics                    %d                         %c    \n", e, grade);
	printf("6. Biology                    %d                         %c    \n", f, grade);
	printf("7. Geography                  %d                         %c    \n", g, grade);
	printf("8. CRE                        %d                         %c    \n", h, grade);
	printf("\n");
	printf("\n");
	printf("AVERAGE SCORE: %.2lf\n", average);
	printf("GRADE: %c\n", grade);
	printf("Remark: %s\n", remark);
	printf("\n");

	return 0;
}
