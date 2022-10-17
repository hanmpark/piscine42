/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:04:45 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/27 18:10:31 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char **str)
{
	int	j;
	int	i;

	j = 1;
	while (str[j])
	{
		i = 0;
		while (str[j][i])
		{
			ft_putchar(str[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
		ft_print_params(av);
	return (0);
}
