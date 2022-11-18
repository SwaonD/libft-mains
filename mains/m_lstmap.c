/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listgenerator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addebadi <addebadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:54:57 by addebadi          #+#    #+#             */
/*   Updated: 2022/08/07 15:54:57 by addebadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static void	*f(void *content)
{
	int		i;
	char	*str;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ft_toupper(str[i]);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ft_tolower(str[i]);
		i++;
	}
	return (content);
}

static void	del(void *content)
{
	((char *)content)[0] = '~';
}

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
	t_list	*new_list;

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
	printf("---------LISTE INITIALE--------\n");
	ft_print_list(init_list);
	new_list = ft_lstmap(init_list, &f, &del);
	printf("\n---------LISTE COPIE--------\n");
	ft_print_list(new_list);
	ft_free_list(init_list);
	ft_free_list(new_list);
	return (0);
}
