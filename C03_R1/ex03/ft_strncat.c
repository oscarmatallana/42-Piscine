/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:44:43 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/30 15:18:43 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	unsigned int	j;
	int				i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && nb > j)
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

int	main (void)
{
	char dest[] = "Test2";
	char src[] = "Test1";
	char src2[] = "Test3";
	char dest2[] = "Test4";

	printf("%s\n", strncat(dest2, src2, 3));
	printf("%s\n", ft_strncat(dest, src, 3));
	return(0);
}*/	
