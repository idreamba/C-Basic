/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karee <idreamba@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:12:49 by karee             #+#    #+#             */
/*   Updated: 2024/04/13 16:51:01 by karee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(){
	int a = 10;
	int b = 20;
	int c = 30;
	int *ip; // ตัวแปรแบบ pointer ใช้ * ในการประกาศ

	printf("Address of a: %p, Value of a: %d\n", &a, a);
	printf("Address of b: %p, Value of b: %d\n", &b, b);
	printf("Address of c: %p, Value of c: %d\n", &c, c);

	// ip = &a; // ให้ ip ชี้ไปที่ a
	ip = &b;
	// ip = &c;
	printf("Address of ip: %p\n", ip); // ไม่มีดาวใช้ดู address
	printf("Value of ip: %d\n", *ip); // ดาว คือ ใช้ดูค่า

	*ip = 100; // ให้ค่าที่ ip ชี้ไปเป็น 100
	printf("Address of ip: %p\n", ip); // ไม่มีดาวใช้ดู address
	printf("Value of ip: %d\n", *ip); // ดาว คือ ใช้ดูค่า

	printf("Address of b: %p, Value of b: %d\n", &b, b);


	return 0;

}
