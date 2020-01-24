/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:53:22 by cphillip          #+#    #+#             */
/*   Updated: 2019/10/16 15:33:31 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

void	print_error(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		write(2, &str[i++], 1);
}

void	ft_display(char *argv)
{
	int		fd;
	char	buf[BUFF_SIZE + 1];
	int		ret;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return ;
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		print_error("File name missing.\n");
	else if (argc > 2)
		print_error("Too many arguments.\n");
	else
		ft_display(argv[1]);
	return (0);
}
