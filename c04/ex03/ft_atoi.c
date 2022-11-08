/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:17:23 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/29 00:09:10 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	digit;
	int	i;
	int	posorneg;

	i = 0;
	posorneg = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			posorneg++;
		if (posorneg == 2)
			posorneg = posorneg - 2;
		i++;
	}
	digit = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = digit * 10 + (str[i] - 48);
		i++;
	}
	if (posorneg == 1)
		digit = digit * -1;
	return (digit);
}

/*#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_atoi(av[1]));
	return (0);
}*/
