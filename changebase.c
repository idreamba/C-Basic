#include <stdio.h>

void change_base(int num, int base, int change)
{
	char *result;
	char *alp = "0123456789ABCDEF";
	int base10_num = 0;
	int ind = 0;
	char *conv;

	if (num == 0)
	{
		printf("0\n");
	}
	// logic operator is && = and , || = or, ! = not
	if (!(base >= 2 && base <= 16) || !(change >= 2 && change <= 16))
	{
		printf("Please, Insert the base and change between 2 and 16\n");
	}

	printf("conv = %s\n", '0'+num);
}

int main()
{
	change_base(10110, 1, 10);
	return 0;
}
