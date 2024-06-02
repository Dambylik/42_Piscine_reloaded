/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:36:09 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/17 16:19:05 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

//#define BUF_SIZE	4096

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	display_file(char *filename)
{
	char	buf;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	while (read(fd, &buf, 1) > 0)
		write(1, &buf, 1);
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (display_file(argv[1]));
}
