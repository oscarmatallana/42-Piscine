/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatalla <omatalla@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 12:34:47 by omatalla          #+#    #+#             */
/*   Updated: 2026/03/27 12:58:15 by omatalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	function(char *num1)
{
	*num1 = 2;
	return (*num1);
}

#include <stdio.h>

int	main (int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("num1 = %d\n",function(argv[1]));
	return (0);
}
