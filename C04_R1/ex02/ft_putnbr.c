/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:07:48 by omatalla          #+#    #+#             */
/*   Updated: 2026/04/01 10:58:45 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		write(1, &"0123456789"[nb % 10], 1);
	}
}
/*
void	ft_putnbr(int nb)
{
	int	a;
	char	digit[12];

	a = 0;
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}
	while (nb > 0)
	{
		digit[a] = (nb % 10) + '0';
		nb = nb / 10;
		a++;
	}
	while (a > 0)
	{
		a--;
		write (1, &digit[a], 1);
	}
}*/
/*
int	main(void)
{
	ft_putnbr(14031484);
	return (0);
}
*/
