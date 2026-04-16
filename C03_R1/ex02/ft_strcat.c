/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 10:06:08 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/27 12:21:52 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)

{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	char dest[] = "Test2";
	char src[] = "Test1";
	char src2[] = "Test3";
	char dest2[] = "Test4";

	printf("%s\n", strcat(dest2, src2));
	printf("%s\n", ft_strcat(dest, src));
	return(0);
}*/
