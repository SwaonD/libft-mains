/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:40:11 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/02 01:40:11 by addebadi         ###   ########.fr       */
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
	int	i;
	int	y;

	if (argc != 2)
		return (1);
	i = ft_atoi(argv[1]);
	printf("ft_atoi : %d\n", i);
	y = atoi(argv[1]);
	printf("atoi : %d\n", y);
	return (0);
}
