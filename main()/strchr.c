/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:27:24 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 23:02:38 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

int		main(void)
{
	printf("%s\n", ft_strchr("42 Network", 'w'));
	printf("%s\n", strchr("42 Network", 'w'));
	return (0);
}
