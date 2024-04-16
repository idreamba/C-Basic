#include <stdio.h>
#include <string.h>

struct student
{
	char name[20];	   // ชือ
	long id;		   // รหัสนักศึกษา
	float gpa;		   // เกรดเฉลีย
	char advisor[20];  // ชืออาจารย์ที#ปรึกษา
	char guardian[20]; // ชือผู้ปกครอง
};

int main()
{

	struct student s[3];

	strcpy(s[0].name, "Komkrit");
	s[0].id = 36394;
	s[0].gpa = 4.0;
	strcpy(s[0].advisor, "Somchai");
	strcpy(s[0].guardian, "Sombat");

	strcpy(s[1].name, "Nakrit");
	s[1].id = 36390;
	s[1].gpa = 2.0;
	strcpy(s[1].advisor, "Komkrit");
	strcpy(s[1].guardian, "Sombat");

	strcpy(s[2].name, "Nakorn");
	s[2].id = 37374;
	s[2].gpa = 3.0;
	strcpy(s[2].advisor, "Komkrit");
	strcpy(s[2].guardian, "Sombat");

	for (int i = 0; i < 3; i++)
	{
		printf("Name: %s\n", s[i].name);
		printf("ID: %ld\n", s[i].id);
		printf("GPA: %.2f\n", s[i].gpa);
		printf("Advisor: %s\n", s[i].advisor);
		printf("Guardian: %s\n", s[i].guardian);
		printf("------------------------\n");
	}

	return 0;
}
