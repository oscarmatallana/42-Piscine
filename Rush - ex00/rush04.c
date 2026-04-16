/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbali <dbali@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:01:52 by dbali             #+#    #+#             */
/*   Updated: 2026/03/14 15:01:54 by dbali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((row == 1 && column == 1) || (row == y && column == x))
				ft_putchar(65);
			else if ((row == y && column == 1) || (row == 1 && column == x))
				ft_putchar(67);
			else if (row == 1 || row == y || column == 1 || column == x)
				ft_putchar(66);
			else
				ft_putchar(32);
			column++;
		}
		ft_putchar(10);
		row++;
	}
}
