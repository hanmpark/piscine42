/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:39:42 by hanmpark          #+#    #+#             */
/*   Updated: 2022/11/08 11:38:05 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_charset(char c, char *str)
{
	while (str && *str)
		if (*str++ == c)
			return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (str && *str && check_charset(*str, charset))
		str++;
	if (*str == 0)
		return (0);
	while (str && *str)
	{
		count++;
		while (str && *str && !check_charset(*str, charset))
			str++;
		while (str && *str && check_charset(*str, charset))
			str++;
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
	tab = malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (str && str[i])
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

int main(int ac, char **av) {
  (void)ac;
  char **strs = ft_split(av[1], av[2]);
  printf("%d\n", count_words(av[1], av[2]));
  while (strs && *strs) {
    strs++;("%s\n", *strs);
  }
}