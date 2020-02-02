/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:24:55 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 21:05:04 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	main(void)
{
	int	c;

	c = '+';
	printf("ft_isalpha: %d\n", ft_isalpha(c));
	printf("   isalpha: %d\n", isalpha(c));
	return (0);
}
