/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhug <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:07:15 by mhug              #+#    #+#             */
/*   Updated: 2022/09/25 18:51:44 by mhug             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_duplicate(int **tab, int value, int size, int index);
int	check_col_up(int **tab, int value, int size, int index);
int	check_col_down(int **tab, int value, int size, int index);
int	check_row_left(int **tab, int value, int size, int index);
int	check_row_right(int **tab, int value, int size, int index);

int	is_valid_value(int **tab, int *input, int size, int index)
{
	int	x;
	int	y;

	x = index % size;
	y = index / size;
	if (is_duplicate(tab, tab[y][x], size, index))
		return (0);
	else if (!check_col_up(tab, input[x], size, index)
		|| (y == size - 1
			&& !check_col_down(tab, input[size + x], size, index))
		|| !check_row_left(tab, input[2 * size + y], size, index)
		|| (x == size - 1
			&& !check_row_right(tab, input[3 * size + y], size, index)))
		return (0);
	return (1);
}

int	solve(int **tab, int *input, int size, int index)
{
	int	value;
	int	x;
	int	y;

	if (index == size * size)
		return (1);
	x = index % size;
	y = index / size;
	value = 1;
	while (value <= size)
	{
		tab[y][x] = value;
		if (is_valid_value(tab, input, size, index))
			if (solve(tab, input, size, index + 1))
				return (1);
		++value;
	}
	tab[y][x] = 0;
	return (0);
}
