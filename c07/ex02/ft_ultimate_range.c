/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:11:33 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/04 17:02:54 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	max -= min;
	*range = malloc(max * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	int	*range;
	int	size;
	int	i;

	if (argc == 3)
	{
		ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
		i = 0;
		size = atoi(argv[2]) - atoi(argv[1]);
		while (i < size)
		{
			printf("%d ", range[i]);
			++i;
		}
		printf("\n");
	}
	return (0);
}*/
