#include <stdio.h>
#include <string.h>

struct student
{
	char name[20];
	int age;
	float gpa;
};

typedef struct
{
	char name[20];
	int age;
	float gpa;
} student;

int main()
{
	/** way 1 */
	struct student s1;

	/** way 2 */
	// typedef struct student std;
	// std s1;

	s1.age = 20;
	s1.gpa = 3.5;
	strcpy(s1.name, "Print");
	printf("s1.age: %d\n", s1.age);
	printf("s1.gpa: %f\n", s1.gpa);
	printf("s1.name: %s\n", s1.name);

	printf("----------------\n");

	/** way 3 */
	student s2;
	s2.age = 10;
	s2.gpa = 3;
	strcpy(s2.name, "Pao");
	printf("s2.age: %d\n", s2.age);
	printf("s2.gpa: %f\n", s2.gpa);
	printf("s2.name: %s\n", s2.name);

	printf("----------------\n");

	/** typedef */
	int x = 10;

	typedef int pupprint;
	pupprint y = 20;

	printf("x: %d\n", x);
	printf("y: %d\n", y);

	return 0;
}
