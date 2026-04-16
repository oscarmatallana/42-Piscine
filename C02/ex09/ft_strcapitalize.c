/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:35:10 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/25 14:21:04 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z') && ((str[i-1] == ' ') &&
					       	((str[i-1] != '0') && (str[i-1] != '1') && (str[i-1] != '2') && (str[i-1] != '3') && (str[i-1] != '4') && (str[i-1] != '5') && (str[i-1] != '6') && (str[i-1] != '7') && (str[i-1] != '8') && (str[i-1] != '9')))) || (str[i-1] == '\0'))
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";

	ft_strcapitalize(str);
	printf("%s", ft_strcapitalize(str));
	return (0);
}
