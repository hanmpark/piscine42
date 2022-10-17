/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomajdan <yomajdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:08:34 by yomajdan          #+#    #+#             */
/*   Updated: 2022/10/02 21:30:15 by yomajdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	display_numbers(char *str, char *nbr)
{
	int		i;
	char	*contentstr;
	char	**dict;

	i = 0;
	contentstr = read_file(str, 0);
	dict = ft_split(contentstr);
	free(contentstr);
	while (dict[i] != 0)
	{
		if (is_line_match(dict[i], nbr))
		{
			i = 0;
			while (dict[i])
				free(dict[i++]);
			free(dict);
			return (1);
		}
		i++;
	}
	i = 0;
	while (dict[i])
		free(dict[i++]);
	free(dict);
	return (0);
}
