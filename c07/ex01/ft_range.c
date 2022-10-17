/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:15:56 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/03 10:46:20 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_int_init(int *tab, int min, int max)
{
	int	i;

	i = 0;
	while (min != max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	count;
	int	*tab;

	i = 0;
	count = min;
	if (min >= max)
		return (NULL);
	while (count != max)
	{
		i++;
		count++;
	}
	tab = malloc(i * sizeof(int));
	if (!tab)
		return (NULL);
	ft_int_init(tab, min, max);
	return (tab);
}

#include <stdio.h>
int	main()
{
	int	i;
	int	*tab;

	i = 0;
	tab = ft_range(-1, 2);
	printf("%i, %i, %i\n", tab[0], tab[1], tab[2]);
	free(tab);
	return (0);
}
