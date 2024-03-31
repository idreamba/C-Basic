#include <stdio.h>

int main()
{
	int a, b;
	a = 4;
	b = 3;

	if (a > b)
	{
		printf("a is greater than b\n");
	}
	else if (a == b)
	{
		printf("a is equal to b\n");
	}
	else if (a != b)
	{
		printf("a is not equal to b\n");
	}
	else
	{
		printf("a is less than b\n");
	}

	printf("bye...\n");

	return 0;
}
