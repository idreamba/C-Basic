/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_apply.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karee <idreamba@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:30:12 by karee             #+#    #+#             */
/*   Updated: 2024/03/29 14:36:52 by karee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, i;
	float *score, sum;
	sum = 0.0;

	printf("Number of Student :");
	scanf("%d", &num);

	score = (float *)malloc(num * sizeof(float)); // ให้ขนาดเท่ากับที่รับ num เข้ามา แล้วคูณกับ  float เพราะยังไม่รู้ว่า float ใช้กี่ byte

	for(i=0; i<num; i++){
		printf("Student %d: ", i+1);
		scanf("%f", score+i); // ไม่ต้องใช้ &score เพราะ score เก็บตำแหน่งอยู่แล้ว
		sum = sum + *(score+i); // หรือ sum += *(score+i); ขยับ pointer +1 ไปเรื่อยๆ
	}

	printf("Number of Student: %d\n", num);
	printf("Average Score: %.2f\n", sum/num);

	free(score); // คืนพื้นที่ทุกครั้งที่ใช้ malloc (เพื่อป้องกัน memory leak

	return 0;
}
