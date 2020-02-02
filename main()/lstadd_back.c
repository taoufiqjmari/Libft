/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:25:30 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 23:56:17 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

void	printlist(t_list *head)
{
	t_list	*temp;

	temp = head;
	while (temp)
	{
		printf("%d -> ", (int)temp->content);
		temp = temp->next;
	}
	printf("NULL");
	printf("\n");
}

int		main(void)
{
	t_list	n1;
	t_list	n2;
	t_list	n3;
	t_list	n4;
	t_list	*head;
	t_list	**lst;
	t_list	*new;

	new = &n4;
	lst = &head;
	n1.content = (void *)45;
	n2.content = (void *)12;
	n3.content = (void *)32;
	n4.content = (void *)70;
	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	n4.next = NULL;
	printf("BEFORE: ");
	printlist(head);
	ft_lstadd_back(lst, new);
	printf("AFTER:  ");
	printlist(head);
	return (0);
}
