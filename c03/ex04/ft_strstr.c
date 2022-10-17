/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:33:16 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/22 14:34:01 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		f;

	i = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		f = 0;
		if (str[i] != to_find[f])
			i++;
		while (str[i] == to_find[f])
		{
			i++;
			f++;
			if (to_find[f] == '\0')
				return (str + i - f);
		}
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*a = "Foo Bar Baz";
	char	*b = "Baw";

	printf("%s\n", ft_strstr(a, b));
	printf("%s\n", strstr(a, b));
	return (0);
}*/
