#include <stdio.h>

int main(){
	int i,j,k;

/** for loop */
	for (i = 1; i <= 5; i++)
		printf("%d ", i);

	printf("\n");

/** while loop */
	j = 1;
	while (j < 1)
	{
		printf("%d ", j);
		j++;
	}

/** do while loop */
	k = 1;
	do
	{
		printf("Insert number : ");
	} while (k < 1);

	printf("Exit\n");


	return 0;

}
