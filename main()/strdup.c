/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:27:28 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/30 22:35:30 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	i = 0;
	if (!(s2 = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int		main(void)
{
	char	str[] = "42 Network, 1337 Benguerir.";
	char	*ft_ptr;
	char	*ptr;

	ft_ptr = ft_strdup(str);
	ptr = strdup(str);
	printf("ft_strdup: %s\n", ft_ptr);
	printf("   strdup: %s\n", ptr);
	return (0);
}
