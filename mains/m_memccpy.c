/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:56:21 by addebadi          #+#    #+#             */
/*   Updated: 2022/07/30 11:56:21 by addebadi         ###   ########.fr       */
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
	char	*s1;
	char	*s2;
	char	*pt1;
	char	*pt2;

	if (argc != 5)
		return (1);
	s1 = strdup(argv[1]);
	s2 = strdup(argv[1]);
	pt1 = ft_memccpy(s1, argv[2], argv[3][0], atoi(argv[4]));
	printf("ft_memccpy : %s\n", pt1);
	printf("s1 : %s\n", s1);
	pt2 = memccpy(s2, argv[2], argv[3][0], atoi(argv[4]));
	printf("memccpy    : %s\n", pt2);
	printf("s2 : %s\n", s2);
	free(s1);
	free(s2);
	return (0);
}
