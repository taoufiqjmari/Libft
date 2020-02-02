/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:25:57 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 17:45:36 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst && f)
	{
		f(&(lst->content));
		lst = lst->next;
	}
}

void	fun(void *ptr)
{
	*((char *)ptr) -= 32;
}

void	printlist(t_list *head)
{
	t_list	*temp;
	temp = head;

	while (temp)
	{
		printf("%c -> ", (char)temp->content);
		temp = temp->next;
	}
	printf("NULL");
	printf("\n");
}

int		main(void)
{
	t_list	n1, n2, n3;
	t_list	*head;
	void (*funptr)(void *);

	funptr = &fun;
	n1.content = (void *)'a';
	n2.content = (void *)'b';
	n3.content = (void *)'c';
	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	printf("BEFORE: ");
	printlist(head);
	ft_lstiter(head, funptr);
	printf("AFTER:  ");
	printlist(head);
	return (0);
}
