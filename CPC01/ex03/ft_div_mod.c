/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 09:47:06 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/19 17:51:16 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	c;
	int	d;

	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}
/*
#include <stdio.h>

int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(7, 2, &div, &mod);
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", 7, 2, div, mod);
}*/
