/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karee <idreamba@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:12:49 by karee             #+#    #+#             */
/*   Updated: 2024/03/29 13:12:51 by karee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(){
	int *ip;
	int a[] = {31, 14};

	ip = a; // เขียนอีกแบบ ip = &a[0];

	ip++;

	printf("variable a value: %d and address: %p\n",a[0],a);
	printf("variable ip: address: %p, value point from a: %d\n",ip, *ip);

}
