/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:27:39 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 01:32:21 by tjmari           ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	if (!dst && size == 0)
	{
		return (ft_strlen(src));
	}
	while (dst[len] && len < size)
		len++;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < size)
		dst[len] = '\0';
	return (ft_strlen(src) + i);
}

int		main(void)
{
	char	src1[] = " 1337 Benguerir.";
	char	src2[] = " 1337 Benguerir.";
	char	*dst1 = NULL;
	char	*dst2 = NULL;

	printf("ft_strlcat return: %zu\n", ft_strlcat(dst1, src1, 0));
	printf("   strlcat return: %zu\n\n", strlcat(dst2, src2, 0));
	printf("ft_strlcat src: %s\n", src1);
	printf("   strlcat src: %s\n\n", src2);
	printf("ft_strlcat dst: %s\n", dst1);
	printf("   strlcat dst: %s\n", dst2);
	return (0);
}
