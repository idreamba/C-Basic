#include <stdio.h>

int main(){

	//char a = 'a';
	int b[5] = {1,2,3,4,5}; // +1 = \n = NULL
	// int c = 10;
	// long d = 1000000000000;
	// float e = 10.5;
	// double f = 10.5;

	//printf("a: %ld\n", sizeof(a)); // sizeof() คำสั่งเช็คขนาดของตัวแปร หน่วยเป็น bype
	// printf("b: %ld\n", sizeof(b));
	// printf("c: %ld\n", sizeof(c));
	// printf("d: %ld\n", sizeof(d));
	// printf("e: %ld\n", sizeof(e));
	// printf("f: %ld\n", sizeof(f));

	printf("b: %p\n", b);
	// printf("b: %s\n", b);
	printf("address b: %p, value b: %d \n", &b[0], b[0]);
	printf("address b: %p, value b: %d \n", &b[1], b[1]);
	printf("address b: %p, value b: %d \n", &b[2], b[2]);
	printf("address b: %p, value b: %d \n", &b[3], b[3]);
	printf("address b: %p, value b: %d \n", &b[4], b[4]);
	// printf("address b: %p, value b: %d \n", &b[5], b[5]);
	// printf("address b: %p, value b: %c \n", &b[6], b[6]);

	return 0;
}
