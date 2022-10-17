/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:28:56 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/26 12:51:42 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	value;
	int	x;

	x = 0;
	value = 0;
	while (tab[x])
	{
		tab[x] = y;
		solve(tab, tab[0]);
		display(tab[x]);
		x++;
	}
}
