/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:27:02 by tjmari            #+#    #+#             */
/*   Updated: 2020/01/31 15:22:19 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int		main(void)
{
	int	fp;

	fp = open("file.txt", O_WRONLY | O_CREAT);
	ft_putchar_fd('T', fp);
	return (0);
}
