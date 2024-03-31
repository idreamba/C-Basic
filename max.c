#include <stdio.h>

int Length(int x[]){
	int i = 0;

	// int len = sizeof(x) / sizeof(x[0]);
	int len = *(&x + 1) - x;


	/** way 1 */
	// for(i = 0; x[i] != '\0'; i++);

	/** way 2 */
	// while(x[i] != '\0'){
	// 	i++;
	// }

	return len;
}

int Max(int x[]){
	int i;
	int ans = x[0];
	int y[] = x;
	int len = sizeof(y) / sizeof(y[0]);
	//int len = sizeof(y);
	for(i = 1; i < len; i++){
		if(ans < x[i]){
			ans = x[i];
		}
	}
	return ans;
}

int main(){
	// \0 = NULL
	//int q[] = {1, 3, 5, 4, 2, '\0'};
	int q[5];
	int count;

	/* Input */
	for (count = 0; count < 5; count++)
	{
		printf("Please enter number for %d member of array: ", count + 1);
		scanf("%d", &q[count]);
	}

	printf("Max = %d\n", Max(q));
	//printf("Lenght = %d\n", Length(q));

	return 0;
}
