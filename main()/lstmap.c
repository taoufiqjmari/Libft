/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:26:22 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 17:56:27 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*temp;

	lst2 = NULL;
	while (lst && f && del)
	{
		if (!(temp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, temp);
		lst = lst->next;
	}
	return (lst2);
}

void	*fun(void *ptr)
{
	ptr = NULL;
	return ((void *)'d');
}

void	delfun(void *ptr)
{
	ptr = NULL;
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
	t_list	n1;
	t_list	n2;
	t_list	n3;
	t_list	*head;

	n1.content = (void *)'a';
	n2.content = (void *)'b';
	n3.content = (void *)'c';
	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	printf("BEFORE: ");
	printlist(head);
	head = ft_lstmap(head, fun, delfun);
	printf("AFTER:  ");
	printlist(head);
	return (0);
}
