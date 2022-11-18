/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_striteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:24:43 by addebadi          #+#    #+#             */
/*   Updated: 2022/11/08 15:53:47 by addebadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_next_letter(unsigned int i, char *s)
{
	if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
	{
		if (s[i] == 'z' || s[i] == 'Z')
			s[i] -= 25;
		else
			s[i] += 1;
	}
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("ft_striteri : %s\n", argv[1]);
	ft_striteri(argv[1], &ft_next_letter);
	printf("ft_striteri : %s\n", argv[1]);
	return (0);
}
