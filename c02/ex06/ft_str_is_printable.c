/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:42:03 by hanmpark          #+#    #+#             */
/*   Updated: 2022/09/20 08:53:33 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] >= 32 && str[i] <= 127)
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
	
	c = "";
	answer = ft_str_is_printable(c);
	printf("Answer is %d\n", answer);
	return (0);
}*/
