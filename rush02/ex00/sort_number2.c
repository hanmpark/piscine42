/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomajdan <yomajdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:08:26 by yomajdan          #+#    #+#             */
/*   Updated: 2022/10/02 21:08:30 by yomajdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	sort_unity(char *nbr, char *file, int flag)
{
	char	tmp[2];

	if (nbr[0] >= '1')
	{
		if (flag == 1)
			write(1, " ", 1);
		else if (flag == 2)
			write(1, " ", 1);
		tmp[0] = nbr[0];
		tmp[1] = '\0';
		display_numbers(file, tmp);
	}
}

void	sort_ten2(char *nbr, char *file, int flag)
{
	char	tmp[3];

	if (nbr[0] == '1')
	{
		if (flag)
			write(1, " ", 1);
		tmp[0] = nbr[0];
		tmp[1] = nbr[1];
		tmp[2] = '\0';
		display_numbers(file, tmp);
	}
}

void	sort_ten(char *nbr, char *file, int flag)
{
	char	tmp[3];

	if (nbr[0] >= '2')
	{
		if (flag)
			write(1, " ", 1);
		tmp[0] = nbr[0];
		tmp[1] = '0';
		tmp[2] = '\0';
		display_numbers(file, tmp);
		flag = 2;
	}
	if (nbr[0] == '1')
		sort_ten2(nbr, file, flag);
	else
	{
		tmp[0] = nbr[1];
		tmp[1] = '\0';
		sort_unity(tmp, file, flag);
	}
}

void	sort_hundred(char *nbr, char *file, int flag)
{
	int		i;
	int		j;
	char	tmp[4];

	i = 0;
	j = 0;
	if (nbr[0] >= '1')
	{
		if (flag)
			write(1, " ", 1);
		tmp[0] = nbr[0];
		tmp[1] = '\0';
		display_numbers(file, tmp);
		write(1, " ", 1);
		display_numbers(file, "100");
	}
	while (nbr[++i] != '\0' && i < 4)
	{
		tmp[j] = nbr[i];
		j++;
	}
	tmp[j] = '\0';
	sort_ten(tmp, file, 1);
}
