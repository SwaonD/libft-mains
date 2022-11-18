/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_memcmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:08:15 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/01 15:08:15 by addebadi         ###   ########.fr       */
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
	int	r1;
	int	r2;

	if (argc != 4)
		return (1);
	r1 = ft_memcmp(argv[1], argv[2], atoi(argv[3]));
	printf("ft_memcmp : %d\n", r1);
	r2 = memcmp(argv[1], argv[2], atoi(argv[3]));
	printf("memcmp    : %d\n", r2);
	return (0);
}
