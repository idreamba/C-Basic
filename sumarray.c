#include <stdio.h>

int main(){
	/** 1 dimension */
	// int x[5] = {1, 2, 3, 4, 5};

	int i,j;

	int sum[2][5];

	int a[5][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
	};

	int b[2][5] = {
		{3, 2, 6, 4, 5},
		{3, 1, 4, 5, 10},
	};

	sum[0][0] = a[0][0] + b[0][0];
	printf("%d\n", sum[0][0]);

	sum[0][1] = a[0][1] + b[0][1];
	printf("%d\n", sum[0][1]);

	sum[0][2] = a[0][2] + b[0][2];
	printf("%d\n", sum[0][2]);

	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			sum[i][j] = a[i][j] + b[i][j];
			printf("%d ", sum[i][j]);
		}
	}

	return 0;

}
