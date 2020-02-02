/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:26:07 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 16:06:32 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}

int		main(void)
{
	t_list	n1;
	t_list	n2;
	t_list	n3;
	t_list	*head;

	n1.content = (void *)45;
	n2.content = (void *)12;
	n3.content = (void *)32;
	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	head = ft_lstlast(head);
	printf("ft_lstlast: %d\n", (int)head->content);
	return (0);
}
