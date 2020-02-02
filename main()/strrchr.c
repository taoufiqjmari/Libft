/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:28:20 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 23:12:19 by tjmari           ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len > 0 && s[len] != c)
		len--;
	if (s[len] == c)
		return ((char *)(s + len));
	return (0);
}

int		main(void)
{
	printf("%s\n", ft_strrchr("42 NetwoNrk", 'N'));
	printf("%s\n", strrchr("42 NetwoNrk", 'N'));
	return (0);
}
