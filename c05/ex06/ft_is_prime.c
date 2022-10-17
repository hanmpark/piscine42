/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:40:42 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/27 18:05:40 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i < nb / 3)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	printf("%i\n", ft_is_prime(2147483629));
	return (0);
}*/
