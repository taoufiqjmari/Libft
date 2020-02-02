/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:27:48 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 22:55:50 by tjmari           ###   ########.fr       */
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

int		main(void)
{
	char	s[] = "42 Network";

	printf("ft_strlen: %lu\n", ft_strlen(s));
	printf("   strlen: %lu\n", strlen(s));
	return (0);
}
