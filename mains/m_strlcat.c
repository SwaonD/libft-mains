/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:19:01 by addebadi          #+#    #+#             */
/*   Updated: 2022/11/15 15:57:35 by addebadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	size_t	r1;
	size_t	r2;
	char *s1;
	char *s2;

	if (argc != 3)
		return (1);
	s1 = malloc(sizeof(char) * 30);
	s2 = malloc(sizeof(char) * 30);
	memset(s1, 0, 30);
	memset(s2, 0, 30);
	memset(s1, 'B', 4);
	memset(s2, 'B', 4);
	r1 = ft_strlcat(s1, argv[1], atoi(argv[2]));
	printf("ft_strlcat : %s return %lu\n", s1, r1);
	r2 = strlcat(s2, argv[1], atoi(argv[2]));
	printf("strlcat    : %s return %lu\n", s2, r2);
	return (0);
}
