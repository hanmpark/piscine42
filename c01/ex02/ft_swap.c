/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 08:32:42 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/18 18:01:48 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int	main(void)
{
	int	a;
	int	b;
	int	*c;
	int	*d;

	a = 2;
	b = 4;
	c = &a;
	d = &b;
	ft_swap(c, d);
	write(1, &a, 1);
	write(1, &b, 1);
	return (0);
}*/
