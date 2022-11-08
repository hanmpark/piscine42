/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:31:45 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/25 19:59:58 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int		i;
	int		max;
	char	length[11];

	i = 0;
	while (n != 0)
	{
		max = 9 - n - i;
		while(length[0] != max)
		{
			
		}
	}
}

int	main(int ac, char **av)
{
	if (atoi(av[1]) < 1 || atoi(av[1]) > 9 || ac != 2)
		return (0);
	ft_print_combn(atoi(av[1]));
	return (0);
}