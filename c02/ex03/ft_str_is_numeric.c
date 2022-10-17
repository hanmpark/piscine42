/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:12:34 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/20 08:51:08 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] >= 48 && str[i] <= 57)
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
	
	c = "0123456789f";
	answer = ft_str_is_numeric(c);
	printf("Answer is %d\n", answer);
	return (0);
}*/
