/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:36:55 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/06 16:55:45 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*besttab;

	besttab = malloc(length * sizeof(int));
	if (!besttab)
		return (NULL);
	i = 0;
	while (i < length)
	{
		besttab[i] = f(tab[i]);
		i++;
	}
	return (besttab);
}
