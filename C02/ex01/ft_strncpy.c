/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 16:42:04 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/23 21:01:48 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *scr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	scr[] = "Pruefung";
	char	dest[7];

	ft_strncpy(dest, scr, 6);
	printf("%s", dest);
	return (0);
}*/
