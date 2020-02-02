/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:27:12 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 15:40:53 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int c, int fd)
{
	long	num;

	num = c;
	if (num < 0)
	{
		num = -num;
		ft_putchar_fd('-', fd);
	}
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
		ft_putchar_fd(num + 48, fd);
}

int		main(void)
{
	int	fp;

	fp = open("file.txt", O_WRONLY | O_CREAT);
	ft_putnbr_fd(2147483647, fp);
	return (0);
}
