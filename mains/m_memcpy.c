/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_memcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:34:50 by addebadi          #+#    #+#             */
/*   Updated: 2022/07/30 17:34:50 by addebadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

// int	ft_demo(void)
// {
// 	char str[] = "foo-bar";
// 	char str1[] = "foo-bar";
// 	printf("memcpy : %s\n", (char *)memcpy(&str[3],&str[4], 4));
// 	printf("memmove : %s\n", (char *)memmove(&str1[3],&str1[4], 4));
// }

int	main(int argc, char **argv)
{
	char	*s1;
	char	*pt1;
	char	*s2;
	char	*pt2;

	if (argc != 3)
		return (1);
	s1 = strdup(argv[1]);
	s2 = strdup(argv[1]);
	pt1 = ft_memcpy(s1, s1 + strlen(s1) / 2, atoi(argv[2]));
	printf("ft_memcpy : %s\n", pt1);
	printf("s1 : %s\n", s1);
	pt2 = memcpy(s2, s2 + strlen(s2) / 2, atoi(argv[2]));
	printf("memcpy    : %s\n", pt2);
	printf("s2 : %s\n", s2);
	free(s1);
	free(s2);
	return (0);
}
