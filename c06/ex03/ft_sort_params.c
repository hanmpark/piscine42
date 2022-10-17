/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:26:49 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/27 11:54:34 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char **str, char **str1)
{
	char	*ts;

	ts = *str;
	*str = *str1;
	*str1 = ts;
}

int	ft_strcmp(char *str, char *str1)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != str1[i])
			return (str[i] - str1[i]);
		i++;
	}
	return (0);
}

void	ft_print_params(char **str)
{
	int	i;
	int	j;

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
	int	i;
	int	j;

	i = 1;
	j = 2;
	if (!(ac > 1))
		return (0);
	while (i < ac)
	{
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
				ft_swap(&av[i], &av[j]);
			j++;
		}
		i++;
		j = i + 1;
	}
	ft_print_params(av);
	return (0);
}
