/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 08:44:24 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/18 18:01:32 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	*div;
	int	*mod;

	a = 4;
	b = 2;
	div = &c;
	mod = &d;
	ft_div_mod(a, b, div, mod);
	write(1, &c, 1);
	write(1, &d, 1);
	return (0);
}*/
