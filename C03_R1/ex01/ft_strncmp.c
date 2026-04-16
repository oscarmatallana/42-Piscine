/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 17:45:03 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/31 10:02:29 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "Pipapaparapo";
	char	s2[] = "Pipapapa";
	unsigned int	n = 1;

	printf("Answer from C Function: %d\n", strncmp(s1, s2, n));
	printf("%d", ft_strncmp(s1, s2, n));
}*/
