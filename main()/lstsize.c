/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:26:31 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 16:01:17 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*lst2;

	i = 0;
	lst2 = lst;
	while (lst2)
	{
		lst2 = lst2->next;
		i++;
	}
	return (i);
}

int	main(void)
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
	printf("ft_lstsize: %d\n", ft_lstsize(head));
	return (0);
}
