/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:45:16 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/27 18:07:31 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	while (i < nb / 3)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (nb);
	if (nb % 2 == 0)
		nb++;
	while (nb)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb += 2;
	}
	return (0);
}

/*#include <stdio.h>
int	main()
{
	printf("%i\n", ft_find_next_prime(2147483629));
	return (0);
}*/
