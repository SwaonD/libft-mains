/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:49:32 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/01 23:49:32 by addebadi         ###   ########.fr       */
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
	r1 = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
	printf("ft_strncmp : %d\n", r1);
	r2 = strncmp(argv[1], argv[2], atoi(argv[3]));
	printf("strncmp    : %d\n", r2);
	return (0);
}
