/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karee <idreamba@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:47:17 by karee             #+#    #+#             */
/*   Updated: 2024/03/29 13:50:51 by karee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
	char word[15] = "Hello, World!";
	char *p;

	p = word; // or p=&word[0]
	printf("Word: %s\n", p); // แสดงทั้งหมด
	printf("Char: %c\n", *p); // แสดงตัวแรก &word[0]


	/** เขียนแบบ string pointer */
	char *ptr = "CatHero";
	printf("Word: %s\n", ptr); // แสดงทั้งหมด
	printf("Char: %c\n", *ptr); // แสดงตัวแรก
	printf("Char %c\n", ptr[3]); // แสดงตัวที่ 4 ของ string
	printf("Length: %ld\n", strlen(ptr)); // ต้อง include string.h

	return 0;
}
