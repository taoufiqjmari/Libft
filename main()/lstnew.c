/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:26:26 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 15:47:12 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*elm;

	if (!(elm = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	elm->content = content;
	elm->next = NULL;
	return (elm);
}

int		main(void)
{
	t_list	*head;

	head = ft_lstnew((void *)6);
	printf("ft_lstnew: %d\n", (int)head->content);
	return (0);
}
