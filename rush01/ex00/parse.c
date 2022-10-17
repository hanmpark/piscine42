/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhug <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:35:16 by mhug              #+#    #+#             */
/*   Updated: 2022/09/25 18:51:24 by mhug             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	are_valid_values(char *str, int count, int size)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if (!(*str >= '1' && *str <= size + '0'))
			return (0);
		str += 2;
		++i;
	}
	return (1);
}

int	is_valid_size(char *str, int *size)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			++count;
		else
			return (0);
		if ((str[++i] && str[i] != ' ' ) || (str[i] == ' ' && !(str[++i])))
			return (0);
	}
	if (count < 12 || count > 36 || count % 4 != 0)
		return (0);
	else if (!are_valid_values(str, count, count / 4))
		return (0);
	else
		*size = count / 4;
	return (1);
}

int	*parse_input(char *str, int size)
{
	int	*tab;
	int	i;
	int	j;

	tab = malloc(sizeof(int) * (size * 4));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[j] = str[i] - '0';
			++j;
		}
		++i;
	}
	return (tab);
}
