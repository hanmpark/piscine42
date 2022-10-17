/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomajdan <yomajdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:08:01 by yomajdan          #+#    #+#             */
/*   Updated: 2022/10/02 21:08:04 by yomajdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*read_file(char *name, int i)
{
	char	*tab;
	int		fd;
	char	c;

	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (read(fd, &c, 1) > 0)
		i++;
	tab = (char *)malloc(sizeof(char) * (i + 1));
	if (!tab)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	close (fd);
	fd = open(name, O_RDONLY);
	read(fd, tab, i);
	tab[i] = '\0';
	close (fd);
	return (tab);
}
