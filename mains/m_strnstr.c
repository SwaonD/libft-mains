/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_strnstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:45:58 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/02 00:45:58 by addebadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"
// #include <bsd/string.h>

int	main(int argc, char **argv)
{
	char	*p1;

	if (argc != 4)
		return (1);
	p1 = ft_strnstr(argv[1], argv[2], atoi(argv[3]));
	printf("ft_strnstr : %s\n", p1);
	return (0);
}
