/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:20:01 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/19 17:58:03 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 20;
	ft_swap(&num1, &num2);
	printf("%d\n%d\n", num1, num2);
	return (0);
}*/
