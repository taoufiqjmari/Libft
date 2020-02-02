/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:24:20 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 20:14:08 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

int		main(void)
{
	char arr1[] = "42 Network, 1337 Benguerir";
	char arr2[] = "42 Network, 1337 Benguerir";

	ft_bzero(arr1 + 10, 4);
	printf("ft_bzero is: %s\n", arr1);
	bzero(arr2 + 10, 4);
	printf("   bzero is: %s\n", arr2);
	return (0);
}
