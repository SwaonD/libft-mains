/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_itoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:44:08 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/06 13:44:08 by addebadi         ###   ########.fr       */
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
	char	*str;

	if (argc != 2)
		return (1);
	str = ft_itoa(atoi(argv[1]));
	printf("ft_itoa : %s", str);
	printf("\n");
	free(str);
	return (0);
}
