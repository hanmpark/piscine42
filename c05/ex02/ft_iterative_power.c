/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:05:24 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/26 20:16:19 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	n = nb;
	while (--power)
		n *= nb;
	return (n);
}

/*#include <stdio.h>
int	main()
{
	printf("%i\n", ft_iterative_power(2, 3));
	return (0);
}*/
