/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomajdan <yomajdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:07:34 by yomajdan          #+#    #+#             */
/*   Updated: 2022/10/02 21:07:39 by yomajdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	trim_line(char *tab, char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[j] == ' ')
		j++;
	while (str[j] >= '0' && str[j] <= '9')
		tab[i++] = str[j++];
	while (str[j] == ' ')
		j++;
	if (!(str[j] == ':' && i > 0))
		return (0);
	tab[i++] = str[j++];
	while (str[j] == ' ')
		j++;
	while (is_printable(str[j]))
		tab[i++] = str[j++];
	if (str[j] != '\n' && str[j] != '\0')
		return (0);
	while (tab[--i] == ' ')
		;
	tab[i + 1] = '\0';
	return (1);
}

char	*ft_malloc(char *str)
{
	char	*tab;
	int		i;

	i = 0;
	while (str[i] && check_sep(str[i]) == 0)
		i++;
	if (i == 0)
		return (0);
	tab = (char *)malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (NULL);
	i = 0;
	trim_line(tab, str);
	return (tab);
}

char	**ft_split(char *str)
{
	char	**tab;
	char	*line;
	int		i;
	int		j;

	i = 0;
	j = count_line(str);
	tab = (char **)malloc(sizeof(char *) * (j + 1));
	if (!tab)
		return (NULL);
	j = 0;
	while (str[i])
	{			
		line = ft_malloc(&str[i]);
		tab[j] = line;
		j++;
		while (str[i] && check_sep(str[i]) == 0)
			i++;
		if (!(str[i]))
			break ;
		i++;
	}
	tab[j] = 0;
	return (tab);
}
