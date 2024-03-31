/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_array_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karee <idreamba@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:25:18 by karee             #+#    #+#             */
/*   Updated: 2024/03/29 13:41:35 by karee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define SIZE 10

/** swap 1,2,3,4,5,6,7,8,9,10 to 10,9,8,7,6,5,4,3,2,1 */

int main(){
	int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int *pa, *pb, i, temp;

	pa = a; // or pa = &a[0]

	printf("Original array: ");
	for(int i = 0; i < SIZE -1 ; i++) // SIZE - 1, index start 0 - 9
		printf("%d ",*pa++);
	printf("%d\n",*pa);

	// swap array
	pa = a; // pa = 1
	pb = &a[SIZE - 1]; // pb = 10
	for(i=0;i<SIZE/2;i++){ // สลับครึ่งหน้ากับครึ่งหลัง เป็นจำนวน 5 ครั้งจาก 10 ตัว
		temp = *pa; // ให้ temp เก็บ 1
		*pa = *pb; // assign ค่า pa[0] = pb[9] คือ 10
		*pb = temp; // assign ค่า pb[9] = temp คือ 1
		pa++; // ขยับตำแหน่งของ pa ไปหน้า
		pb--; // ขยับตำแหน่งของ pb ไปหลัง
	}

	pa = a;
	printf("Swap array: ");
	for(int i = 0; i < SIZE -1 ; i++) // SIZE - 1, index start 0 - 9
		printf("%d ",*pa++);
	printf("%d\n",*pa);


	return 0;
}
