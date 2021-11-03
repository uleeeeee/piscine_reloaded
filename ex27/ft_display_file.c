/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:02:50 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/02 15:22:56 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_content(char *file)
{
	int		fd;
	char	ch;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return ;
	else
		while (read(fd, &ch, 1))
			write(1, &ch, 1);
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
		display_content(argv[1]);
	return (0);
}
