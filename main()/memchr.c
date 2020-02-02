/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:26:42 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 23:16:59 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s2;

	i = 0;
	s2 = (const unsigned char *)s;
	while (i < n)
	{
		if (s2[i] == (unsigned char)c)
			return ((void *)(s2 + i));
		i++;
	}
	return (0);
}

int		main(void)
{
	char	*str = "42 Network, 1337 benguerir.";

	printf("ft_memchr: %s\n", ft_memchr(str, 'b', strlen(str)));
	printf("   memchr: %s\n", memchr(str, 'b', strlen(str)));
	return (0);
}
