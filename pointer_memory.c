#include <stdio.h>
#include <stdlib.h> // malloc, calloc, realloc, free

int main()
{
	int num;
	char *str;

	printf("Enter number of characters: ");
	scanf("%d", &num);

	//str = (char *)malloc(num * sizeof(char));
	str = (char *)calloc(num, sizeof(char));

	for (int i = 0; i < num; i++)
	{
		//printf("Enter character: ");
		scanf(" %c", &str[i]); // ต้อง ใส่ space หน้า %c เพื่อให้รับค่าได้ถูกต้อง
	}

	printf("%s", str);

	free(str); // free the memory allocated by malloc()

	return 0;
}
