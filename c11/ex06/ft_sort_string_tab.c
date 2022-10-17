/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:04:31 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/06 17:17:42 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 1;
	size = 0;
	while (tab[size])
		size++;
	while (i < size)
	{
		while (tab[j])
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
int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_sort_string_tab(av);
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}*/
