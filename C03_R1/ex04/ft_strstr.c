/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 15:33:31 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/31 10:25:44 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)

{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>

int main (void)
{
	char str[] = "Hola Hola Pepsi Cola";
	char to_find[] = "";
	char str2[] = "Hola Hola Pepsi Cola";
	char to_find2[] = "";

	printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str2, to_find2));
	return(0);
}*/
