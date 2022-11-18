/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_strjoin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 01:23:43 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/05 01:23:43 by addebadi         ###   ########.fr       */
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
	char	*pt1;

	if (argc != 3)
		return (1);
	pt1 = ft_strjoin(argv[1], argv[2]);
	printf("ft_strjoin : %s\n", pt1);
	free(pt1);
	return (0);
}
