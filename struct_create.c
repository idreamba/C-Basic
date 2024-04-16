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
	// static variable
	char name[20];
	long id;
	float gpa;
	char advisor[20];
	char guardian[20];

	// name = "Komkrit"; ไม่สามารถใช้เครื่องหมาย = ในการกำหนดค่าให้กับ array ได้ในภาษาซี
	strcpy(name,"Komkrit");
	id = 36394;
	gpa = 4.0;
	strcpy(advisor,"Somchai");
	strcpy(guardian,"Sombat");

	printf("Name: %s\n", name);
	printf("ID: %ld\n", id);
	printf("GPA: %.2f\n", gpa);
	printf("Advisor: %s\n", advisor);
	printf("Guardian: %s\n", guardian);
	printf("------------------------\n");

	// struct variable
	struct student s1;

	strcpy(s1.name,"Nakrit");
	s1.id = 36390;
	s1.gpa = 2.0;
	strcpy(s1.advisor,"Somchai");
	strcpy(s1.guardian,"Komkrit");

	printf("Name: %s\n", s1.name);
	printf("ID: %ld\n", s1.id);
	printf("GPA: %.2f\n", s1.gpa);
	printf("Advisor: %s\n", s1.advisor);
	printf("Guardian: %s\n", s1.guardian);
	printf("------------------------\n");

	struct student s2;

	strcpy(s2.name,"Nakorn");
	s2.id = 37374;
	s2.gpa = 4.0;
	strcpy(s2.advisor,"Somchai");
	strcpy(s2.guardian,"Komkrit");

	printf("Name: %s\n", s2.name);
	printf("ID: %ld\n", s2.id);
	printf("GPA: %.2f\n", s2.gpa);
	printf("Advisor: %s\n", s2.advisor);
	printf("Guardian: %s\n", s2.guardian);
	printf("------------------------\n");

	return 0;
}
