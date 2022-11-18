/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_lstadd_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:46:22 by addebadi          #+#    #+#             */
/*   Updated: 2022/11/17 16:55:37 by addebadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static void	ft_print_list(t_list *list)
{
	while (list)
	{
		printf("content : %s\n", (char *)(list->content));
		list = list->next;
	}
}

static void	ft_free_list(t_list *list)
{
	if (list == NULL)
		return ;
	ft_free_list(list->next);
	free(list);
}

int	main(int argc, char const *argv[])
{
	int		i;
	t_list	*list;
	t_list	*init_list;

	if (argc < 2)
		return (1);
	list = ft_lstnew((char *)argv[1]);
	init_list = list;
	i = 2;
	while (i < argc)
	{
		list->next = ft_lstnew((char *)argv[i]);
		list = list->next;
		i++;
	}
	list = NULL;
	printf("AVANT :\n");
	ft_print_list(init_list);
	ft_lstadd_front(&init_list, ft_lstnew("machin"));
	printf("APRES :\n");
	ft_print_list(init_list);
	ft_free_list(init_list);
	return (0);
}
