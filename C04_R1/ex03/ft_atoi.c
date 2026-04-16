/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 11:03:04 by omatalla          #+#    #+#             */
/*   Updated: 2026/04/01 14:59:31 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "  ---+--+1234ab567";

	printf("%d", ft_atoi(str));
}

/*
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-' && str[i] != '\0')
	{
		sign = -1 * sign;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
		return (0);
	else
	{
		while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		{
			result = 10 * result;
			result = result + (str[i] - '0');
			i++;
		}
	}
	return (sign * result);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "  ---+--+1234ab567";

	printf("%d", ft_atoi(str));
	return (0);
}*/
