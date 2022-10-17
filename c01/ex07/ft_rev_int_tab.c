/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:11:10 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/02 12:26:30 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	if (size < 2)
		return ;
	size--;
	while (i < size)
	{
		ft_swap(&tab[i], &tab[size]);
		i++;
		size--;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	*tab;
	int	size;

	size = 3;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	ft_rev_int_tab(tab, size);
	while (*tab)
	{
		printf("%d, ", *tab);
		tab++;
	}
	return (0);
}*/
