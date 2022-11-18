/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_putstr_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 22:03:41 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/06 22:03:41 by addebadi         ###   ########.fr       */
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
	if (argc != 2)
		return (1);
	ft_putstr_fd(argv[1], 1);
	return (0);
}
