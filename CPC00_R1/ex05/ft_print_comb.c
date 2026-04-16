/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 11:24:46 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/20 12:43:57 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;
	char	ch;

	n1 = '0';
	n2 = n1 + 1;
	n3 = n2 + 1;

	while (n1 < '8' && n1 != n2 && n1 != n3 && n2 != n3)
	{	
		ch = n1;
		write(1,&n1,1);
		ch = n2;
		write(1,&n2,1);
		ch = n3;
		write(1,&n3,1);
		n1++;
		n2++;
		n3++;
//		printf("%c", ch);
	}
		
}

int main(void)
{
	ft_print_comb();	
	return (0);
}

