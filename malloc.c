/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karee <idreamba@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:57:00 by karee             #+#    #+#             */
/*   Updated: 2024/03/29 14:27:44 by karee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char w[] = "Cat";
	int x = 8;
	double y = 3.14;
	char z = 'M';

	/* ใช้ %d ไมได้ ต้องใช้ lu คือ  */
	printf("Sizeof w = %lu \n", sizeof(w));
	printf("Sizeof x = %lu \n", sizeof(x));
	printf("Sizeof y = %lu \n", sizeof(y));
	printf("Sizeof z = %lu \n", sizeof(z));

	/* ขอพื้นที่หน่วยความจำ และคืนพื้นที่ malloc & free */
	char *str;

	str = (char *)malloc(1); // หน่อยเป็น byte จะได้ 10 byte
	strcpy(str, "Komkrit");
	printf("String = %s, Address = %p\n", str, str);
	printf("Size of str = %ld\n", sizeof(str));

	free(str); // คืนพื้นที่ทุกครั้งที่ใช้ malloc

	/* ขอพื้นที่แบบ int */
	int *ptr;
	ptr = (int *)malloc(10 * sizeof(int)); // หน่วยเป็น byte จะได้ 40 byte เพราะ int มีค่า 4 byte

	for(int i=0;i<10;i++)
		ptr[i] = i; // หรือ *(ptr+i) = i;

	for(int i=0; i<10; i++)
		printf("Integer[%d] = %d\n", i, ptr[i]);

	free(ptr); // คืนพื้นที่ทุกครั้งที่ใช้ malloc

	return 0;
}
