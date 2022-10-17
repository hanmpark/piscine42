/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:21:54 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/20 08:51:58 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] >= 97 && str[i] <= 122)
	{
		i++;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}

/*int	main(void)
{
	char	*c;
	int	answer;
	
	c = "wfiasFfre";
	answer = ft_str_is_lowercase(c);
	printf("Answer is %d\n", answer);
	return (0);
}*/
