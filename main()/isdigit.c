/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:25:12 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 21:04:05 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(void)
{
	int	c;

	c = 'B';
	printf("ft_isdigit: %d\n", ft_isdigit(c));
	printf("   isdigit: %d\n", isdigit(c));
	return (0);
}
