/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cols_and_rows.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhug <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:09:09 by mhug              #+#    #+#             */
/*   Updated: 2022/09/25 18:49:59 by mhug             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_duplicate(int **tab, int value, int size, int index)
{
	int	x;
	int	y;
	int	i;

	x = index % size;
	y = index / size;
	i = 0;
	while (i < x)
	{
		if (tab[y][i] == value)
			return (1);
		++i;
	}
	i = 0;
	while (i < y)
	{
		if (tab[i][x] == value)
			return (1);
		++i;
	}
	return (0);
}

int	check_col_up(int **tab, int value, int size, int index)
{
	int	x;
	int	y;
	int	i;
	int	visible_boxes;
	int	h_max;

	x = index % size;
	y = index / size;
	i = 0;
	h_max = 0;
	visible_boxes = 0;
	while (i <= y)
	{
		if (tab[i][x] > h_max)
		{
			++visible_boxes;
			h_max = tab[i][x];
		}
		++i;
	}
	if (visible_boxes > value
		|| (y == size - 1 && visible_boxes != value))
		return (0);
	return (1);
}

int	check_col_down(int **tab, int value, int size, int index)
{
	int	x;
	int	y;
	int	i;
	int	visible_boxes;
	int	h_max;

	x = index % size;
	y = index / size;
	i = size - 1;
	h_max = 0;
	visible_boxes = 0;
	while (i >= 0)
	{
		if (tab[i][x] > h_max)
		{
			++visible_boxes;
			h_max = tab[i][x];
		}
		--i;
	}
	if (visible_boxes != value)
		return (0);
	return (1);
}

int	check_row_left(int **tab, int value, int size, int index)
{
	int	x;
	int	y;
	int	i;
	int	visible_boxes;
	int	h_max;

	i = 0;
	x = index % size;
	y = index / size;
	h_max = 0;
	visible_boxes = 0;
	while (i <= x)
	{
		if (tab[y][i] > h_max)
		{
			++visible_boxes;
			h_max = tab[y][i];
		}
		++i;
	}
	if (visible_boxes > value
		|| (x == size - 1 && visible_boxes != value))
		return (0);
	return (1);
}

int	check_row_right(int **tab, int value, int size, int index)
{
	int	x;
	int	y;
	int	i;
	int	visible_boxes;
	int	h_max;

	i = size - 1;
	y = index / size;
	x = index % size;
	h_max = 0;
	visible_boxes = 0;
	while (i >= 0)
	{
		if (tab[y][i] > h_max)
		{
			++visible_boxes;
			h_max = tab[y][i];
		}
		--i;
	}
	if (visible_boxes != value)
		return (0);
	return (1);
}
