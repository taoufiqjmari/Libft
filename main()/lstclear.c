/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstclear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:25:41 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 17:07:35 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*elm;

	elm = (t_list *)malloc(sizeof(t_list));
	if (!elm)
		return (NULL);
	elm->content = content;
	elm->next = NULL;
	return (elm);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	else
		*lst = new;
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	while (*lst && del)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}

void	printlist(t_list *head)
{
	t_list	*temp;

	temp = head;
	while (temp)
	{
		printf("%d -> ", (int)temp->content);
		temp = temp->next;
	}
	printf("NULL\n");
}

void	delfun(void *ptr)
{
	ptr = NULL;
}

int		main(void)
{
	t_list *n1;
	t_list *n2;
	t_list *n3;

	n1 = ft_lstnew((void *)20);
	n2 = ft_lstnew((void *)30);
	n3 = ft_lstnew((void *)40);
	ft_lstadd_back(&n1, n2);
	ft_lstadd_back(&n2, n3);
	printf("BEFORE: ");
	printlist(n1);
	ft_lstclear(&n2, delfun);
	printf("AFTER:  ");
	n1->next = NULL;
	printlist(n1);
	return (0);
}
