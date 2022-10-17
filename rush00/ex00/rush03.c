/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsadik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:33:25 by hsadik            #+#    #+#             */
/*   Updated: 2022/09/18 21:59:27 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printstartandend(int x)
{
	int	i;

	i = x - 2;
	if (x >= 1)
		ft_putchar('A');
	while (i > 0)
	{
		ft_putchar('B');
		i--;
	}
	if (x >= 2)
		ft_putchar('C');
}

void	ft_printmiddle(int x)
{
	int	i;

	i = x - 2;
	if (x >= 1)
		ft_putchar('B');
	while (i > 0)
	{
		ft_putchar(' ');
		i--;
	}
	if (x >= 2)
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	i;

	i = y - 2;
	if (y > 0)
		ft_printstartandend(x);
	while (i > 0)
	{
		ft_putchar('\n');
		ft_printmiddle(x);
		i--;
	}
	if (y > 1)
	{
		ft_putchar('\n');
		ft_printstartandend(x);
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}
