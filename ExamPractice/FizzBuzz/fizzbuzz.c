/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 17:09:05 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/30 12:29:37 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	fizzbuzz(void)
{
	int	i;
	char	temp;
	char	temp2;

	i = 1;
	while (i <= 100)
	{
		if (i % 4 == 0 && i % 7 == 0)
		{
			write(1, "FizzBuzz\n", 10);
		}
		else if (i % 4 == 0)
		{
			write(1, "Fizz\n", 5);
		}
		else if (i % 7  == 0)
		{
			write(1, "Buzz\n", 6);
		}
		if (i >= 0 && i <= 9)
		{
			char c = i + '0';
			write (1, &c, 1);
			write (1, "\n", 1);
		}
		
		else if (i >= 10 && i <= 99)
		{
			temp = i / 10 + '0';
			write(1, &temp, 1);
			temp2 = i % 10 + '0';
			write(1, &temp2, 1);
			write(1, "\n", 1);
		}
		//else if (i == 100)
		//	write(1, "Fizz", 4);
		i++;
	}	

return (0);
}

int	main(void)
{
	fizzbuzz();
	return (0);
}


