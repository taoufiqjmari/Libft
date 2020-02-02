/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:28:14 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 20:05:38 by tjmari           ###   ########.fr       */
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

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i] || !str1[i] || !str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!*needle || (!*needle && !len))
		return ((char *)haystack);
	if (!len || ft_strlen(haystack) < needle_len)
		return (NULL);
	while (i <= len)
	{
		if ((!(ft_strncmp((haystack + i), needle, needle_len))))
			return ((char *)(haystack + i));
		len--;
		i++;
	}
	return (NULL);
}

int		main(void)
{
	const char *h = "42 Network, Benguerir";
	const char *n = "work";

	printf("ft_strnstr: %s\n", ft_strnstr(h, n, strlen(h)));
	printf("   strnstr: %s\n", strnstr(h, n, strlen(h)));
	return (0);
}
