/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 03:20:03 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/02 08:31:37 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			if (str[i - 1] < 48 && str[i - 1] >= 32)
				str[i] -= 32;
			if (str[i - 1] > 57 && str[i - 1] < 65)
				str[i] -= 32;
			if (str[i - 1] > 90 && str[i - 1] < 97)
				str[i] -= 32;
			if (str[i - 1] > 122 && str[i - 1] <= 127)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	c[] = "salut, cOmment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s\n", ft_strcapitalize(c));
	return (0);
}
