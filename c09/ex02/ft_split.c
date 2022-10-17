/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:39:42 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/04 13:39:47 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	check_charset(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (str[i])
	{
		if (check_charset(str[i], charset) == 1
			&& check_charset(str[i - 1], charset) == 0 && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

char	*cpy_to_tab(char *str, int start, int end)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc((end - start + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (start < end)
	{
		tab[i] = str[start];
		i++;
		start++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	k = -1;
	i = 0;
	tab = malloc((count_words(str, charset) + 2) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (check_charset(str[i], charset) == 1 && str[i])
			i++;
		if (check_charset(str[i], charset) == 0 && str[i])
		{
			j = i;
			while (check_charset(str[j], charset) == 0 && str[j])
				j++;
			tab[++k] = cpy_to_tab(str, i, j);
			i = j;
		}
	}
	tab[++k] = NULL;
	return (tab);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	ft_split(av[1], av[2]);
	return (0);
}*/
