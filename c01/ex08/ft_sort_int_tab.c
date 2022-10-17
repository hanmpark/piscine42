/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:41:25 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/02 14:06:11 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(int a, int b)
{
	if (a != b)
		return (a - b);
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
		j = i + 1;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	*tab;
	int	result;
	int	size;

	i = 0;
	tab[0] = 4;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 1;
	size = 4;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}*/
