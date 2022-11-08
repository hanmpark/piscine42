/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:16:38 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/25 19:03:27 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;
	i = 97;
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}
/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/