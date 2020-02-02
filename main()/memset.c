/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:26:58 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 20:33:51 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int		main(void)
{
	char str1[] = "42 Network, 1337 Benguerir.";
	char str2[] = "42 Network, 1337 Benguerir.";

	printf("ft_memset: %s\n", ft_memset(str1, 65, 17));
	printf("   memset: %s\n", memset(str2, 65, 17));
	return (0);
}
