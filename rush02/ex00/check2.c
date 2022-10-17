/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomajdan <yomajdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:07:21 by yomajdan          #+#    #+#             */
/*   Updated: 2022/10/02 21:30:22 by yomajdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	check_part(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

int	check_number(char *str)
{
	int			i;
	int			j;
	long int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = k * 10 + str[i] - '0';
		i++;
	}
	if (k > 4294967295)
		return (0);
	return (1);
}

void	putstring(int flag, int k)
{
	if (flag > 0 && k > 0)
		write(1, " ", 1);
}

void	putstring2(int flag)
{
	if (flag > 0)
		write(1, " ", 1);
}
