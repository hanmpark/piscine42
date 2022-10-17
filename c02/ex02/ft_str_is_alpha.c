/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:08:23 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/21 17:06:01 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	{
		i++;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}

/*int	main(void)
{
	char	c[] = "";
	int	i;
	
	i = ft_str_is_alpha(c);
	printf("%d\n", i);
	return (0);
}*/
