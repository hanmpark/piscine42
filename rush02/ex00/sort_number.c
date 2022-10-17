/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomajdan <yomajdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:08:19 by yomajdan          #+#    #+#             */
/*   Updated: 2022/10/02 21:30:39 by yomajdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	sort_thousand(char *nbr, char *file, int flag, int k)
{
	int		i;
	int		j;
	char	tmp[6];

	i = 0;
	j = 0;
	(void) flag;
	if (nbr[0] >= '1' && flag == 0)
	{
		tmp[0] = nbr[0];
		tmp[1] = '\0';
		display_numbers(file, tmp);
		write(1, " ", 1);
	}
	if (k)
		display_numbers(file, "1000");
	while (nbr[++i] != '\0')
	{
		tmp[j] = nbr[i];
		j++;
	}
	tmp[j] = '\0';
	sort_hundred(tmp, file, 1);
}

void	sort_thousand2(char *nbr, char *file, int size, int flag)
{
	char	tmp[6];
	int		k;
	int		i;

	i = 0;
	while (size-- >= 4)
	{
		tmp[i] = nbr[i];
		i++;
	}
	k = check_part(tmp);
	tmp[i] = '\0';
	putstring(flag, k);
	if ((i == 2) && nbr[0] >= '0')
	{
		sort_ten(tmp, file, 0);
		write(1, " ", 1);
		sort_thousand(&nbr[1], file, 1, k);
	}
	if ((i == 3) && nbr[0] >= '0')
	{
		sort_hundred(tmp, file, 0);
		write(1, " ", 1);
		sort_thousand(&nbr[2], file, 1, k);
	}
}

void	sort_millions2(char *nbr, char *file, int size, int flag)
{
	int		i;
	char	tmp[8];
	int		k;

	i = 0;
	while (size-- >= 7)
	{
		tmp[i] = nbr[i];
		i++;
	}
	k = check_part(tmp);
	tmp[i] = '\0';
	putstring2(flag);
	if ((i == 2) && nbr[0] >= '0')
	{
		sort_ten(tmp, file, 0);
		write(1, " ", 1);
		sort_million(&nbr[1], file, 1, k);
	}
	if ((i == 3) && nbr[0] >= '0')
	{
		sort_hundred(tmp, file, 0);
		write(1, " ", 1);
		sort_million(&nbr[2], file, 1, k);
	}
}

void	sort_million(char *nbr, char *file, int flag, int k)
{
	int		i;
	int		j;
	char	tmp[9];

	i = 0;
	j = 0;
	if (nbr[0] >= '1' && flag == 0)
	{
		tmp[0] = nbr[0];
		tmp[1] = '\0';
		display_numbers(file, tmp);
		write(1, " ", 1);
	}
	if (k)
		display_numbers(file, "1000000");
	while (nbr[++i] != '\0')
	{
		tmp[j] = nbr[i];
		j++;
	}
	tmp[j] = '\0';
	sort_thousand2(tmp, file, 6, 1);
}

void	sort_bilion(char *nbr, char *file, int k)
{
	int		i;
	int		j;
	char	tmp[10];

	i = 0;
	j = 0;
	if (nbr[0] >= '1')
	{
		tmp[0] = nbr[0];
		tmp[1] = '\0';
		display_numbers(file, tmp);
		write(1, " ", 1);
	}
	display_numbers(file, "1000000000");
	while (nbr[++i] != '\0')
	{
		tmp[j] = nbr[i];
		if (tmp[j] != '0')
			k = 1;
		j++;
	}
	tmp[j] = '\0';
	sort_millions2(tmp, file, 9, 1);
}
