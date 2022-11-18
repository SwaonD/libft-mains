/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_calloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:40:59 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/04 16:40:59 by addebadi         ###   ########.fr       */
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
	size_t		i;
	char		*str;

	if (argc != 2)
		return (1);
	str = calloc(strlen(argv[1]) + 1, sizeof(char));
	i = 0;
	while (i < strlen(argv[1]))
	{
		str[i] = argv[1][i];
		i++;
	}
	printf("str : %s\n", str);
	free(str);
	str = ft_calloc(strlen(argv[1]), sizeof(char));
	i = 0;
	while (i < strlen(argv[1]))
	{
		str[i] = argv[1][i];
		i++;
	}
	printf("str : %s\n", str);
	free(str);
	return (0);
}
