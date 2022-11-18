/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:14:02 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/01 23:14:02 by addebadi         ###   ########.fr       */
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
	char	*pt2;

	if (argc != 3)
		return (1);
	pt1 = ft_strrchr(argv[1], argv[2][0]);
	printf("ft_strrchr : %s\n", pt1);
	pt2 = strrchr(argv[1], argv[2][0]);
	printf("strrchr    : %s\n", pt2);
	return (0);
}
