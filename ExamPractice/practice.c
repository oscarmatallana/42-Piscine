/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:57:29 by omatalla          #+#    #+#             */
/*   Updated: 2026/04/01 21:47:26 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{       
		if (nb < 0)
		{
		write(1, "-", 1);
		nb = -nb;
		}
		if (nb >= 10)
		{
		ft_putnbr(nb / 10);
		}
		write(1, &"0123456789"[nb % 10], 1);
	}
}	

int	main (void)
{
	int	nb = -345;
	ft_putnbr(nb);
	return (0);
}






