/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomajdan <yomajdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:07:14 by yomajdan          #+#    #+#             */
/*   Updated: 2022/10/02 21:29:14 by yomajdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_nbr(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) == 0)
		return (0);
	{
		while (str[i] != '\0')
		{
			if (str[i] >= '0' && str[i] <= '9')
				i++;
			else
				return (0);
		}
		return (1);
	}
}

int	is_line_match(char *line, char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i] == line[i] && nbr[i] != '\0')
		i++;
	if (line[i] == ':' && nbr[i] == '\0')
	{
		ft_putstr(&line[i + 1]);
		return (1);
	}
	else
		return (0);
}

int	check_sep(char c)
{
	if (c == '\n')
		return (1);
	return (0);
}

int	count_line(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (check_sep(str[i]))
			count++;
		i++;
	}
	return (count);
}
