/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:28:34 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 21:16:29 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	main(void)
{
	int	c;

	c = 'H';
	printf("ft_tolower: %c\n", ft_tolower(c));
	printf("tolower: %c\n", tolower(c));
	return (0);
}
