/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:26:54 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 20:50:19 by tjmari           ###   ########.fr       */
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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst2;
	const unsigned char	*src2;

	if (!dst && !src)
		return (NULL);
	dst2 = (unsigned char *)dst;
	src2 = (const unsigned char *)src;
	if ((src2 > dst2) || (dst == src && len == 1))
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			dst2[len - 1] = src2[len - 1];
			len--;
		}
	}
	return (dst);
}

int		main(void)
{
	char	str1[] = "HelloWorld!";
	char	str2[] = "HelloWorld!";

	printf("ft_memmove: %s\n", ft_memmove(str1, str1 + 8, 3));
	printf("   memmove: %s\n", memmove(str2, str2 + 8, 3));
	return (0);
}
