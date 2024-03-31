#include <stdio.h>

int rectangle(int w, int h)
{
	int area;
	area = w * h;
	return area;
}

void print(int w, int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int w, h;
	printf("enter the width: ");
	scanf("%d", &w);
	printf("enter the height: ");
	scanf("%d", &h);

	// call function rectangle
	printf("rectangle area: %d\n", rectangle(w, h));

	// call function print
	print(w, h);

	return 0;
}
