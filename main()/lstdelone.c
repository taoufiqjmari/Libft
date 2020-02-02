/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdelone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:25:46 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 21:02:17 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

t_list		*ft_lstnew(void *content)
{
	t_list	*elm;

	elm = (t_list *)malloc(sizeof(t_list));
	if (!elm)
		return (NULL);
	elm->content = strdup(content);
	elm->next = NULL;
	return (elm);
}

void		ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

static void	ft_remelem(t_list **head, int pos)
{
	t_list	*tmp;
	t_list	*back;
	t_list	*front;
	int		i;

	i = 0;
	tmp = *head;
	back = tmp;
	while (tmp || i > pos)
	{
		front = tmp->next;
		if (i == pos)
		{
			ft_lstdelone(tmp, free);
			tmp = NULL;
			back->next = front;
			tmp = back;
			return ;
		}
		i++;
		back = tmp;
		tmp = tmp->next;
	}
}

int			main(void)
{
	t_list **head;
	t_list *tmp;

	*head = ft_lstnew("hello");
	(*head)->next = ft_lstnew("world");
	(*head)->next->next = ft_lstnew("!");
	tmp = *head;
	printf("Before -->\n");
	while (tmp)
	{
		printf("Content : %s\n", (char*)tmp->content);
		tmp = tmp->next;
	}
	ft_remelem(head, 1);
	tmp = *head;
	printf("After -->\n");
	while (tmp)
	{
		printf("Content : %s\n", (char*)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}
