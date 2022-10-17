/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:38:24 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/18 18:01:03 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}
/*int	main(void)
{
	int	a;
	int	b;
	int	*c;
	int	*d;

	a = 1;
	b = 2;
	c = &a;
	d = &b;
	ft_ultimate_div_mod(c, d);
	write(1, &a, 1);
	write(1, &b, 1);
	return (0);
}*/
