/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:26:35 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 20:38:39 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst2;
	const unsigned char	*src2;

	i = 0;
	dst2 = (unsigned char *)dst;
	src2 = (const unsigned char *)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (src2[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}

int		main(void)
{
	char	src[] = "42 Network, 1337 Benguerir.";
	char	dst[20];

	ft_memccpy(dst, src, 'z', 20);
	memccpy(dst, src, 'z', 20);
	printf("ft_memccpy: %s\n", dst);
	printf("   memccpy: %s\n", dst);
	return (0);
}
