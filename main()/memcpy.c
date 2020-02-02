/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:26:50 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 20:27:57 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst2;
	const unsigned char	*src2;

	if (dst == src && n == 1)
		return (dst);
	if (!dst && !src)
		return (NULL);
	i = 0;
	dst2 = dst;
	src2 = src;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}

int		main(void)
{
	char arr_src[] = "1337.ma";
	char arr_dst[20] = "abcdefghijkl";

	printf("ft_memcpy: %s\n", ft_memcpy(arr_dst, arr_src, strlen(arr_src)));
	printf("   memcpy: %s\n", memcpy(arr_dst, arr_src, strlen(arr_src)));
	return (0);
}
