/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:24:28 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 22:17:23 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <strings.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	if (!(ptr = malloc(count * size)))
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

int		main(void)
{
	int	*ft_ptr = ft_calloc(1, sizeof(int));
	int	*ptr = calloc(1, sizeof(int));

	printf("ft_calloc: %d\n", *ft_ptr);
	printf("   calloc: %d\n", *ptr);
	return (0);
}
