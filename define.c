#include <stdio.h>
#define NAME "Pupprint"
#define a 1

/** global variable */
// int a = 1;
int b = 2;

void print(){
	printf("a = %d, b = %d\n", a, b);
}

int main(){

	printf("a = %d, b = %d\n", a, b);

	/** local variable */
	//a = 10;
	b = 20;

	printf("a = %d, b = %d\n", a, b);

	/** function */
	print();

	NAME = "Pao";
	printf("Name: %s\n", NAME);

	return 0;
}
