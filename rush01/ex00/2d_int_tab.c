/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_2d_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:14:56 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/25 16:59:19 by mhug             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

int	**init_2d_int_tab(int n_rows, int n_cols)
{
	int	i;
	int	j;
	int	**tab;

	i = 0;
	tab = malloc(n_rows * sizeof(int *));
	while (i < n_rows)
	{
		tab[i] = malloc(n_cols * sizeof(int));
		i++;
	}
	i = 0;
	while (i < n_rows)
	{
		j = 0;
		while (j < n_cols)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}

void	display_2d_int_tab(int **tab, int n_rows, int n_cols)
{
	int	i;
	int	j;

	i = 0;
	while (i < n_rows)
	{
		j = 0;
		while (j < n_cols)
		{
			ft_putnbr(tab[i][j]);
			if (j != n_cols - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	free_2d_int_tab(int **tab, int n_rows)
{
	int	i;

	i = 0;
	while (i < n_rows)
	{
		free(tab[i]);
		++i;
	}
	free(tab);
}
