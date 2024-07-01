/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:30:08 by linyao            #+#    #+#             */
/*   Updated: 2024/06/08 17:25:52 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

void	ft_putstr_fd(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_display(int fd)
{
	int		bytes_read;
	char	buf[BUF_SIZE];

	bytes_read = read(fd, buf, BUF_SIZE);
	while (bytes_read > 0)
	{
		write(1, buf, bytes_read);
		bytes_read = read(fd, buf, BUF_SIZE);
	}
}

int	main(int arc, char **arv)
{
	int	fd;

	if (arc == 1)
	{
		ft_putstr_fd(2, "File name missing.\n");
		return (1);
	}
	if (arc > 2)
	{
		ft_putstr_fd(2, "Too many arguments.\n");
		return (1);
	}
	fd = open(arv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd(2, "Cannot read file.\n");
		return (1);
	}
	ft_display(fd);
	close(fd);
	return (0);
}
