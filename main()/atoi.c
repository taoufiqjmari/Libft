/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:24:09 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 00:59:48 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	condition(long result, long sign)
{
	if (result > 2147483648 && sign == -1)
		return (0);
	if (result > 2147483647 && sign == 1)
		return (-1);
	return (0);
}

int			ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if ((result > 2147483648 && sign == -1)
				|| (result > 2147483647 && sign == 1))
			return (condition(result, sign));
		i++;
	}
	return (result * sign);
}

int			main(void)
{
	printf("ft_atoi: %d\n", ft_atoi("123451635436"));
	printf("atoi: %d\n\n", atoi("123451635436"));
	printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
	printf("atoi: %d\n\n", atoi("12Three45678"));
	printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
	printf("atoi: %d\n\n", atoi("Hello World!"));
	printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
	printf("atoi: %d\n\n", atoi("+42 BLAH!"));
	printf("ft_atoi: %d\n", ft_atoi("-42"));
	printf("atoi: %d\n\n", atoi("-42"));
	printf("ft_atoi: %d\n", ft_atoi("     +42"));
	printf("atoi: %d\n\n", atoi("     +42"));
	printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("atoi: %d\n\n", atoi("\t\n\v\f\r 42"));
	printf("ft_atoi: %d\n", ft_atoi(""));
	printf("atoi: %d\n\n", atoi(""));
	printf("ft_atoi: %d\n", ft_atoi("-12 34hh"));
	printf("atoi: %d\n\n", atoi("-12 34hh"));
	printf("ft_atoi: %d\n", ft_atoi("-+-+-+12"));
	printf("atoi: %d\n\n", atoi("-+-+-+12"));
	return (0);
}
