/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:39:57 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/04 22:53:41 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac != 4)
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	operation(a, b, av[2][0]);
	write(1, "\n", 1);
	return (0);
}