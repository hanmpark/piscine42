/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 01:13:38 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/26 19:58:32 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	n = 1;
	while (nb)
		n *= nb--;
	return (n);
}

/*#include <stdio.h>
int	main()
{
	printf("%i\n", ft_iterative_factorial(13));
	return (0);
}*/
