/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:14:19 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/06 17:31:02 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	ft_intcmp(int i, int j)
{
	return (i - j);
}*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorting;

	i = 1;
	sorting = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			sorting = 0;
		i++;
	}
	i = 1;
	if (sorting == 0)
		while (i < length)
		{
			if (f(tab[i - 1], tab[i]) < 0)
				return (0);
			i++;
		}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	int	i;
	int	tab[5] = {5, 4, 3, 3, 1};

	i = ft_is_sort(tab, 5, &ft_intcmp);
	printf("%d\n", i);
	return (0);
}*/
