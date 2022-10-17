/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 06:47:15 by hanmpark          #+#    #+#             */
/*   Updated: 2022/10/04 19:00:28 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char c[] = "hellO";
	char d[] = "hello";

	printf("compared and result = %d\n", ft_strcmp(c, d));
	printf("if result != 0, strings are not the same\n");
	return (0);
}*/
