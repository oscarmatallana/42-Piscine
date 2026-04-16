/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 18:01:14 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/24 21:11:23 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *scr)
{
	int	i;

	i = 0;
	while (scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	scr[] = "Test";
	char	dest[5];

	ft_strcpy(dest, scr);
	printf("%s", dest);
	return (0);
}*/
