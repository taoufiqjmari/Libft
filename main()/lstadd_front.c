/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:25:37 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 16:27:37 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst && new)
	{
		new->next = *lst;
		*lst = new;
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
	t_list	n0;
	t_list	n1;
	t_list	n2;
	t_list	n3;
	t_list	*head;
	t_list	**lst;
	t_list	*new;

	new = &n0;
	lst = &head;
	n0.content = (void *)50;
	n1.content = (void *)45;
	n2.content = (void *)12;
	n3.content = (void *)32;
	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	printf("BEFORE: ");
	printlist(head);
	ft_lstadd_front(lst, new);
	printf("AFTER:  ");
	printlist(head);
	return (0);
}
