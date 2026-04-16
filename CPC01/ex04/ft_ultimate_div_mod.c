/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 12:04:15 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/19 16:56:36 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
/*
#include <stdio.h>

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 7;
	num2 = 3;
	printf("before:\n*a=%d\n*b=%d\n", num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("after:\n*a=%d\n*b=%d\n", num1, num2);
}*/
