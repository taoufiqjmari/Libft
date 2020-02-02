/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:27:44 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 00:01:44 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	if (size)
	{
		while (size - 1 > 0 && src[i])
		{
			dst[i] = src[i];
			i++;
			size--;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

int		main(void)
{
	char	src1[] = "42 Network, 1337 Benguerir.";
	char	src2[] = "42 Network, 1337 Benguerir.";
	char	dst1[20];
	char	dst2[20];

	ft_strlcpy(dst1, src1, 15);
	strlcpy(dst2, src2, 15);
	printf("ft_strlcpy return: %zu\n", ft_strlcpy(dst1, src1, 5));
	printf("   strlcpy return: %zu\n\n", strlcpy(dst2, src2, 5));
	printf("ft_strlcpy src: %s\n", src1);
	printf("   strlcpy src: %s\n\n", src2);
	printf("ft_strlcpy dst: %s\n", dst1);
	printf("   strlcpy dst: %s\n", dst2);
	return (0);
}
