/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_strtrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:39:53 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/06 11:39:53 by addebadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <memory.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*pt1;

	if (argc != 3)
		return (1);
	pt1 = ft_strtrim(argv[1], argv[2]);
	printf("ft_strtrim : %s\n", pt1);
	free(pt1);
	return (0);
}
