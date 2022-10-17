/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhug <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:15:35 by mhug              #+#    #+#             */
/*   Updated: 2022/09/25 18:51:07 by mhug             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_valid_size(char *str, int *size);
int		*parse_input(char *str, int size);
int		solve(int **tab, int *input, int size, int index);
void	ft_putstr(char *str);
int		**init_2d_int_tab(int n_rows, int n_cols);
void	display_2d_int_tab(int **tab, int n_rows, int n_cols);
void	free_2d_int_tab(int **tab, int n_rows);

int	main(int argc, char **argv)
{
	int	*input;
	int	**solution;
	int	size;

	if (argc != 2 || !is_valid_size(argv[1], &size))
		ft_putstr("Error\n");
	else
	{
		input = parse_input(argv[1], size);
		solution = init_2d_int_tab(size, size);
		if (input && solution)
		{
			if (solve(solution, input, size, 0))
				display_2d_int_tab(solution, size, size);
			else
				ft_putstr("Error\n");
		}
		else
			ft_putstr("Error\n");
		if (input)
			free(input);
		if (solution)
			free_2d_int_tab(solution, size);
	}
	return (0);
}
