/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 19:02:17 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/24 19:28:58 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
//	char	str[] = "C";
	char	str2[] = "asdasdj\nasdadsdsa";

	ft_str_is_printable(str2);
	printf("%d", ft_str_is_printable(str2));
	return (0);
}*/
