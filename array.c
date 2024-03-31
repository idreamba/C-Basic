/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karee <idreamba@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:11:52 by karee             #+#    #+#             */
/*   Updated: 2024/03/29 13:12:37 by karee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int main()
{

	float arrayVar[10];
	int count;

	/* Input */
	for (count = 0; count < 10; count++)
	{
		printf("Please enter score for %d member of array: ", count + 1);
		scanf("%f", &arrayVar[count]);
	}

	/* Output */
	for (count = 0; count < 10; count++)
	{
		printf("Member %d score = $%.2f\n", count + 1, arrayVar[count]);
		printf("Member %d score = $%.2f\n", count, arrayVar[count]);
	}



	return 0;
}
