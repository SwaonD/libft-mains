/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:24:35 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/06 12:24:35 by addebadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	**strs;
	int		i;

	if (argc != 3)
		return (1);
	strs = ft_split(argv[1], argv[2][0]);
	i = 0;
	while (strs[i])
	{
		printf("ft_split : %s\n", strs[i]);
		i++;
	}
	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (0);
}
