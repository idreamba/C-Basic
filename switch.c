#include <stdio.h>

int main()
{

	int grade;

	printf("Enter grade: ");
	scanf("%d", &grade);

/* if condition */
	// if (grade >= 90)
	// 	printf("Grade: A\n");
	// else if (grade >= 80)
	// 	printf("Grade: B\n");
	// else if (grade >= 70)
	// 	printf("Grade: C\n");
	// else if (grade >= 60)
	// 	printf("Grade: D\n");
	// else
	// 	printf("Grade: F\n");

/* switch condition */
	switch (grade)
	{
	case 90:
		printf("Grade: A\n");
		//break;
	case 80:
		printf("Grade: B\n");
		//break;
	case 70:
		printf("Grade: C\n");
		//break;
	case 60:
		printf("Grade: D\n");
		//break;
	default:
		printf("Grade: F\n");
		break;
	}

	return 0;
}
