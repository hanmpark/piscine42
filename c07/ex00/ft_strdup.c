/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:55:07 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/02 03:54:12 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		count;
	char	*dest;

	i = ft_strlen(src) + 1;
	count = 0;
	dest = malloc(i * sizeof(char));
	if (!dest)
		return (NULL);
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/*#include <stdio.h>
int	main()
{
	char src[] = "Hello";
	char *dest;

	dest = ft_strdup(src);
	printf("Dest = %s\n", dest);
	free(dest);
	return (0);
}*/
