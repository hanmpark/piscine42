/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:06:06 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/18 12:14:41 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char e, char f, char g)
{
	write(1, &e, 1);
	write(1, &f, 1);
	write(1, &g, 1);
	if (e != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print(a + '0', b + '0', c + '0');
				c++;
			}
			b++;
		}
		a++;
	}
}
/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
