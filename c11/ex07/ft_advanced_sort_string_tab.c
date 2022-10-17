/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:43:16 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/06 17:34:38 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	j = 0;
	while(tab[j])
		j++;
	while (--j >= 0)
	{
		i = 0;
		while (++i <= j)
			if (cmp(tab[i - 1], tab[i]) > 0)
				ft_swap(&tab[i - 1], &tab[i]);
	}
}

/*#include <string.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_advanced_sort_string_tab(av, &strcmp);
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}*/
