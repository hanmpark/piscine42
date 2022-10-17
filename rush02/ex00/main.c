/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomajdan <yomajdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:07:47 by yomajdan          #+#    #+#             */
/*   Updated: 2022/10/02 21:30:26 by yomajdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	init_sort(char *nbr, char *file, int size)
{
	int	i;

	i = 0;
	if (size == 10)
		sort_bilion(nbr, file, 0);
	if (size > 7 && size <= 9)
		sort_millions2(nbr, file, size, 0);
	if (size == 7)
		sort_million(nbr, file, 0, 1);
	if (size > 4 && size <= 6)
		sort_thousand2(nbr, file, size, 0);
	if (size == 4)
		sort_thousand(nbr, file, 0, 1);
	if (size == 3)
		sort_hundred(nbr, file, 0);
	if (size == 2)
		sort_ten(nbr, file, 0);
	if (size == 1)
		sort_unity(nbr, file, 0);
}

int	stock_and_sort_numbers(char *file, char *str)
{
	int		size;
	int		j;
	char	*nbr;

	size = 0;
	j = 0;
	while (str[size] != '\0')
		size++;
	nbr = malloc(sizeof(char) * (size + 1));
	if (!nbr)
		return (0);
	while (str[j] != '\0')
	{
		nbr[j] = str[j];
		j++;
	}
	nbr[j] = '\0';
	init_sort(nbr, file, size);
	free(nbr);
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 2 && check_nbr(av[1]))
	{
		if (!check_number(av[1]))
			write(1, "Error", 5);
		if (!(stock_and_sort_numbers("numbers.dict", av[1])))
			write(1, "Error", 5);
		write(1, "\n", 1);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
