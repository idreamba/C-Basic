#include <stdio.h>
#define SIZE 7

int main()
{
	char name[7] = "abcdefg"; // swap name ให้เป็น gfedcba
	char temp;
	char *pa, *pb;

	pa = name; // หรือใช้ pa = &name[0]

	for (int i = 0; i < SIZE - 1; i++)
	{
		printf("%c", name[i]);
	}

	printf("\n");

	// swap
	pb = &name[SIZE - 1]; // ค่าท้ายสุดของ pb คือ g
	for (int i = 0; i < SIZE / 2; i++)
	{
		temp = *pa; // ให้ temp เก็บ 1
		*pa = *pb;	// assign ค่า pa[0] = pb[7] คือ g
		*pb = temp; // assign ค่า pb[7] = temp คือ a
		pa++;		// ขยับตำแหน่งของ pa ไปหน้า
		pb--;		// ขยับตำแหน่งของ pb ไปหลัง
	}

	 /*
    while (ip < ip2) {
        temp = *ip;
        *ip = *ip2;
        *ip2 = temp;
        ip2--;
        ip++;
    }
  */


		// temp = *pa;
		// *pa = *pb; // a to g
		// *pb = temp; // g to a

		// printf("temp: %c\n", temp);
		// printf("pa: %c\n", *pa);
		// printf("pb: %c\n", *pb);


	// for (int i = 0; i < SIZE - 1; i++)
	// {
	// 	printf("%c", name[i]);
	// 	// printf("%c", p[i]);
	// }

	printf("\n");

	return 0;
}
