/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_strmapi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:36:22 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/06 21:36:22 by addebadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

static char	ft_change_char(unsigned int a, char c)
{
	(void) a;
	if (c >= 'a' && c <= 'z')
	{
		if (c == 'z')
			c = 'a';
		else
			c += 1;
	}
	return (c);
}

int	main(int argc, char **argv)
{
	char	*pt1;

	if (argc != 2)
		return (1);
	pt1 = ft_strmapi(argv[1], &ft_change_char);
	printf("ft_strmapi : %s\n", pt1);
	free(pt1);
	return (0);
}
